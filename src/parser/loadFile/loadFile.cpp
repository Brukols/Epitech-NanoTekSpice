/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../../include/parser/Parser.hpp"
#include <iostream>
#include <sstream>
#include <algorithm>

void nts::Parser::loadFile()
{
    std::string line;
    size_t section = 0;
    while (_file.getDataLine(line)) {

        this->cutComment(line);

        if (line.empty())
            continue;
        try {
            if (this->detectPartFile(line, section))
                continue;
            if (section == 1)
                this->parseLineChipset(line);
            else
                this->parseLineLink(line);
        } catch (nts::NTSError const &e) {
            throw e;
        }
    }
}

bool nts::Parser::detectPartFile(std::string &line, size_t &section)
{
    if (line.find(".chipsets:") != std::string::npos) {
        if (section != 0)
            throw (FileError("Chipset Section already declared", "File"));
        else
            section = 1;
        return true;
    } else if (line.find(".links:") != std::string::npos) {
        if (section != 1)
            throw (FileError("No Chipset Section", "File"));
        else
            section = 2;
        return true;
    } else if (section == 0) {
        throw (FileError("No Chipset Section found", "File"));
    }
    return false;
}

void nts::Parser::parseLineLink(std::string &line)
{
    std::istringstream ss(line);
    std::string linked1;
    std::string linked2;
    size_t pinLink1;
    size_t pinLink2;

    ss >> linked1;
    ss >> linked2;

    if (linked2.empty())
        throw (FileError("Link : One or more links is missing", "File"));
    if (linked1.find(':') == std::string::npos || linked2.find(':') == std::string::npos)
        throw (FileError("Name or pin of linked component is missing for linkage", "File"));

    try {
        pinLink1 = std::stoi(linked1.substr(linked1.find(':') + 1));
        pinLink2 = std::stoi(linked2.substr(linked2.find(':') + 1));
    } catch (std::exception const &e) {
        throw nts::NTSError("Pin Link must be number >= 0", "File");
    }
    linked1.erase(linked1.find(':'));
    linked2.erase(linked2.find(':'));
    try {
        _circuit.setLink(linked1, pinLink1, linked2, pinLink2);
    } catch (nts::NTSError const &e) {
        throw e;
    }
}

void nts::Parser::parseLineChipset(std::string &line)
{
    std::istringstream ss(line);
    std::string type;
    std::string name;
    std::string value;
    std::unique_ptr<nts::IComponent> newComponent;
    std::vector<std::unique_ptr<nts::IComponent>> &circuit = _circuit.getCircuit();
    size_t tristate= -2;

    ss >> type;
    ss >> name;

    if (name.empty())
        throw (FileError("Chipset : Type or name missing", "File"));

    std::replace(name.begin(), name.end(), '(', ' ');
    std::replace(name.begin(), name.end(), ')', ' ');

    std::istringstream ss1(name);
    ss1 >> name;
    ss1 >> value;

    if (!value.empty()) {
        try {
            tristate = std::stoi(value);
        } catch (std::exception const &e) {
            throw nts::NTSError("Value for input must be 0 or 1", "File");
        }
        if (tristate != 1 && tristate != 0)
            throw nts::NTSError("Value for input must be 0 or 1", "File");
    }

    auto const& nameFind = std::find_if(circuit.begin(), circuit.end(), [name](std::unique_ptr<IComponent> &o)
    {
        auto *oc = static_cast<nts::AComponent *>(o.get());
        if (oc->getName() == name)
            return true;
        return false;
    });

    if (nameFind != circuit.end())
        throw (FileError("Chipset : A chipset share the same name", "File"));
    try {
        newComponent = _circuit.createComponent(type, name);
    } catch (nts::NTSError const &e) {
        throw e;
    }
    if (tristate == 1 || tristate == 0) {
        auto *temp = static_cast<nts::AComponent *>(newComponent.get());
        temp->setTristatePin(1, static_cast<nts::Tristate>(tristate));
    }
    _circuit.addCircuit(newComponent);
}

void nts::Parser::parseArg()
{
    for_each(_args.begin() + 2, _args.end(), [this](const std::string& command)
    {
        this->changeValueInput(command);
    });
}