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
    _cmdMap["exit"] = &nts::Parser::exit;
    _cmdMap["display"] = &nts::Parser::display;
    _cmdMap["changeValueInput"] = &nts::Parser::changeValueInput;
    _cmdMap["simulate"] = &nts::Parser::simulate;
    _cmdMap["loop"] = &nts::Parser::loop;
    _cmdMap["dump"] = &nts::Parser::dump;
    _exit = false;
} catch (const FileError &e)
{
    throw e;
}

bool nts::Parser::_loop = false;

nts::Parser::~Parser()
{
}