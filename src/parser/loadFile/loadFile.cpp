/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../../include/parser/Parser.hpp"
#include <iostream>
#include <sstream>

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
        //std::cout << line << std::endl;
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
    (void)line;
}

void nts::Parser::parseLineChipset(std::string &line)
{
    std::istringstream ss(line);
    std::string type;
    std::string name;
    std::unique_ptr<nts::IComponent> newComponent;

    ss >> type;
    ss >> name;

    newComponent = _circuit.createComponent(type, name);

    if (!type.compare("input"))
        _circuit.addInput(newComponent);
    else if (!type.compare("output"))
        _circuit.addOutput(newComponent);
    else if (!type.compare("clock"))
        _circuit.addClock(newComponent);
    else
        _circuit.addComponent(newComponent);
}