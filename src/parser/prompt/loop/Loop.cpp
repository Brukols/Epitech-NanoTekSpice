/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../../../include/parser/Parser.hpp"

void nts::Parser::loop(const std::string &line)
{
    nts::Parser::_loop = true;
    while (_loop)
        this->simulate(line);
}