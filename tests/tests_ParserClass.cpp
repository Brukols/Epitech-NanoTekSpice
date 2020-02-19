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

Test(ParserClass, test01, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    argv.push_back(std::string("tests/tests_files/or_gates.nts"));
    argv.push_back(std::string("a=0"));
    argv.push_back(std::string("b=0"));
    try {
        nts::Parser ParserEngine(argv);
    } catch (nts::NTSError const &e) {
        cr_assert_str_eq(e.what(), "This file doesn't exist");
    }
}

Test(ParserClass, test02, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    argv.push_back(std::string("tests/tests_files/or_gate.nts"));
    argv.push_back(std::string("a=0"));
    try {
        nts::Parser ParserEngine(argv);
    } catch (nts::NTSError const &e) {
        cr_assert_str_eq(e.what(), "One or more input have undefined value");
    }
}