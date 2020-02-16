/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../../../include/parser/Parser.hpp"

void nts::Parser::exit(const std::string &line)
{
    (void)line;
    _exit = true;
}