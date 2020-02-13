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
    std::unique_ptr<nts::IComponent>output = _circuit.createOutput("Salut");
    _circuit.addOutput(output);
    signal(SIGINT, signalHandler);
    this->displayPrompt();
    while (std::getline(std::cin, command) && !_exit) {
        if (_cmdMap.find(command) != _cmdMap.end())
            (this->*_cmdMap[command])(command);
        if (_exit) break;
        this->displayPrompt();
    }
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

bool sortOutput(std::unique_ptr<nts::IComponent> &cmp1, std::unique_ptr<nts::IComponent> &cmp2)
{
    std::string name1 = cmp1->getName();
    std::string name2 = cmp2->getName();
    return name1.compare(name2);
}

void nts::Parser::display(const std::string &line)
{
    std::vector<std::unique_ptr<nts::IComponent>> &outputs = _circuit.getOutputs();
    std::sort(outputs.begin(), outputs.end(), sortOutput);
    for_each(outputs.begin(), outputs.end(), [](const auto& o) {std::cout << o->getName() << "="; });
    (void)line;

}

void nts::Parser::changeValueInput(const std::string &line)
{
    (void)line;
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
}