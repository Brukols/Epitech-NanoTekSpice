/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/parser/Parser.hpp"
#include "../../include/errors/Errors.hpp"
#include <iostream>
#include <csignal>
#include <cstdlib>
#include <algorithm>

void nts::Parser::prompt()
{
    std::string command;

    std::unique_ptr<nts::IComponent>output = _circuit.createOutput("B");
    std::unique_ptr<nts::IComponent>output2 = _circuit.createOutput("A");
    std::unique_ptr<nts::IComponent>input = _circuit.createInput("A");
    _circuit.addOutput(output2);
    _circuit.addOutput(output);
    _circuit.addInput(input);

    signal(SIGINT, signalHandler);
    this->displayPrompt();
    while (std::getline(std::cin, command) && !_exit) {
        this->cleanCommand(command);
        if (_cmdMap.find(command) != _cmdMap.end())
            (this->*_cmdMap[command])(command);
        else if (command.find("=") != std::string::npos)
            (this->*_cmdMap["changeValueInput"])(command);
        else
            std::cout << "Unknow command" << std::endl;
        if (_exit) break;
        this->displayPrompt();
    }
}

void nts::Parser::cleanCommand(std::string &command)
{
    command.erase(std::remove(command.begin(), command.end(), ' '), command.end());
    command.erase(std::remove(command.begin(), command.end(), '\t'), command.end());
}

void nts::Parser::displayPrompt() const
{
    std::cout << "> ";
}

void nts::Parser::signalHandler(int signum)
{
    nts::Parser::_loop = false;
    (void)signum;
}

void nts::Parser::exit(const std::string &line)
{
    (void)line;
    _exit = true;
}


void nts::Parser::changeValueInput(const std::string &line)
{
    std::string name = line.substr(0, line.find("="));

    int value = std::stoi(line.substr(line.find("=") + 1));

    if (value < 0 || value > 1 || name.empty()) {
        std::cout << "Change value of an input : \"name=value\" (Value must be 0 or 1)" << std::endl;
        return;
    }

    std::vector<std::unique_ptr<IComponent>> &inputs = _circuit.getInputs();
    auto const& selectedInputU = std::find_if(inputs.begin(), inputs.end(), [name](std::unique_ptr<IComponent> &o)
    {
        auto *oc = static_cast<nts::InputComponent*>(o.get());
        if (oc->getName() == name)
            return true;
        return false;
    });

    if (selectedInputU == inputs.end()) {
        std::cout << "Change value of an input : This input does not exist" << std::endl;
        return;
    }
    auto *selectedInput = selectedInputU->get();
    selectedInput->setTristatePin(1, static_cast<nts::Tristate>(value));
}

void nts::Parser::simulate(const std::string &line)
{
    (void)line;
    //_circuit->simulate();
}

void nts::Parser::loop(const std::string &line)
{
    nts::Parser::_loop = true;
    while (_loop)
        this->simulate(line);
}

void nts::Parser::dump(const std::string &line)
{
    (void)line;
    std::cout << std::endl << "**** OUTPUT ****" << std::endl;
    this->displayOutputs();
    std::cout << std::endl << "**** INPUT ****" << std::endl;
    this->displayInputs();
    std::cout << std::endl << "**** COMPONENTS ****" << std::endl;
    this->displayComponents();
    std::cout << std::endl << "**** CLOCKS ****" << std::endl;
    this->displayClock();
}

bool sortComponentsByName(std::unique_ptr<nts::IComponent> &cmp1, std::unique_ptr<nts::IComponent> &cmp2)
{
    std::string name1 = cmp1->getName();
    std::string name2 = cmp2->getName();
    if (name1.compare(name2) < 0)
        return true;
    return false;
}

void nts::Parser::display(const std::string &line)
{
    std::vector<std::unique_ptr<nts::IComponent>> &outputs = _circuit.getOutputs();
    std::sort(outputs.begin(), outputs.end(), sortComponentsByName);
    for_each(outputs.begin(), outputs.end(), [](const auto& o)
    {
        auto *oc = static_cast<nts::OutputComponent*>(o.get());
        std::cout << oc->getName() << "=";
        if (oc->getTristate(1) == -1)
            std::cout << "U" << std::endl;
        else
            std::cout << oc->getTristate(1) << std::endl;
    });
    (void)line;
}

void nts::Parser::displayOutputs()
{
    std::vector<std::unique_ptr<nts::IComponent>> &components = _circuit.getOutputs();
    std::sort(components.begin(), components.end(), sortComponentsByName);
    for_each(components.begin(), components.end(), [this](const auto& o)
    {
        auto *oc = static_cast<nts::AComponent*>(o.get());
        std::cout << oc->getName() << std::endl;
        oc->dump();
        std::cout << std::endl;
    });
}

void nts::Parser::displayInputs()
{
    std::vector<std::unique_ptr<nts::IComponent>> &components = _circuit.getInputs();
    std::sort(components.begin(), components.end(), sortComponentsByName);
    for_each(components.begin(), components.end(), [this](const auto& o)
    {
        auto *oc = static_cast<nts::AComponent*>(o.get());
        std::cout << oc->getName() << std::endl;
        oc->dump();
        std::cout << std::endl;
    });
}

void nts::Parser::displayComponents()
{
    std::vector<std::unique_ptr<nts::IComponent>> &components = _circuit.getComponents();
    std::sort(components.begin(), components.end(), sortComponentsByName);
    for_each(components.begin(), components.end(), [this](const auto& o)
    {
        auto *oc = static_cast<nts::AComponent*>(o.get());
        std::cout << oc->getName() << std::endl;
        oc->dump();
        std::cout << std::endl;
    });
}

void nts::Parser::displayClock()
{
    std::vector<std::unique_ptr<nts::IComponent>> &components = _circuit.getClocks();
    std::sort(components.begin(), components.end(), sortComponentsByName);
    for_each(components.begin(), components.end(), [this](const auto& o)
    {
        auto *oc = static_cast<nts::AComponent*>(o.get());
        std::cout << oc->getName() << std::endl;
        oc->dump();
        std::cout << std::endl;
    });
}