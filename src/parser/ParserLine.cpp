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

bool nts::Parser::isLinkPart(const std::string &line) const
{
    if (line.find(".links:") != std::string::npos)
        return true;
    return false;
}

bool nts::Parser::isChipsetPart(const std::string &line) const
{
    if (line.find(".chipsets:") != std::string::npos)
        return true;
    return false;
}