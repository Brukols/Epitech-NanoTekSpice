/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/parser/Parser.hpp"
#include "../../include/errors/Errors.hpp"

nts::Parser::Parser(std::vector<std::string> &args) try : _args(args), _file
(_args[1])
{

} catch (const FileError &e)
{
    throw e;
}

nts::Parser::~Parser()
{
}