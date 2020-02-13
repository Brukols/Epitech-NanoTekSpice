/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../include/nanotekspice.hpp"
#include "../include/parser/Parser.hpp"
#include "../include/errors/Errors.hpp"
#include <iostream>

int nanotekspice(int argc, char **argv)
{
    std::vector<std::string> args(argv, argv + argc);
    if (argc < 2) {
        std::cout << "./nanotekspice circuit_file.nts input_name=input_value"<< std::endl;
        return 0;
    }
    try {
        nts::Parser Parser(args);
        Parser.prompt();
    } catch (nts::NTSError const &e) {
        std::cout << e.getComponent() << ": " << e.what() << std::endl;
        return 84;
    }
    return 0;
}