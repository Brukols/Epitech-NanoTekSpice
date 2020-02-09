/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../include/nanotekspice.hpp"
#include "../include/Parser.hpp"
#include "../include/errors/Errors.hpp"

int nanotekspice(int argc, char **argv)
{
    std::vector<std::string> args(argv, argv + argc);
    if (argc < 2)
        throw (UserError("No configuration file is provided", "User"));
    nts::Parser Parser(args);
    return 0;
}