/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/Parser.hpp"
#include "../../include/errors/Errors.hpp"

nts::Parser::Parser(std::vector<std::string> &args) : _args(args),
_filename(_args.back())
{

}

nts::Parser::~Parser()
{
}