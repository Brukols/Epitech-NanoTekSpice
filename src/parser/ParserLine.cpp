/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/parser/Parser.hpp"
#include "../../include/errors/Errors.hpp"

#include <iostream>

void nts::Parser::cutComment(std::string &line)
{
    if (line.find('#') != std::string::npos)
        line.erase(line.find("#"));
}