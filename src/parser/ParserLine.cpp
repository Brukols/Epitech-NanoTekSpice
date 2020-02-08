/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/Parser.hpp"
#include "../../include/errors/Errors.hpp"

void nts::Parser::cutComment(std::string &line)
{
    line.substr(0, line.find("#"));
}