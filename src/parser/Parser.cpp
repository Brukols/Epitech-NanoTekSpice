/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/Parser.hpp"
#include "../../include/errors/Errors.hpp"

nts::Parser::Parser(int ac, char **av) : _args(av, av + ac), _filename(_args.back())
{
}

nts::Parser::~Parser()
{
}