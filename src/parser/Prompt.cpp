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

void nts::Parser::prompt()
{
    std::string command;

    signal(SIGINT, signalHandler);
    this->displayPrompt();
    while (std::getline(std::cin, command)) {
        this->displayPrompt();
    }
}

void nts::Parser::displayPrompt() const
{
    std::cout << "> ";
}

void nts::Parser::signalHandler(int signum)
{
    (void)signum;
}