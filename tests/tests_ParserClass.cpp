/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(ParserClass, test00, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    argv.push_back(std::string("tests/tests_files/or_gate.nts"));
    argv.push_back(std::string("a=0"));
    argv.push_back(std::string("b=0"));
    nts::Parser ParserEngine(argv);
}