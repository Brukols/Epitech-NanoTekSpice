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

void nts::Parser::prompt()
{
    std::string command;

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

void nts::Parser::display(const std::string &line)
{
    (void)line;
}

void nts::Parser::changeValueInput(const std::string &line)
{
    (void)line;
}

void nts::Parser::simulate(const std::string &line)
{
    (void)line;
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