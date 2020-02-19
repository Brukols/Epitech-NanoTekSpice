/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(Dump, test00, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    argv.push_back(std::string("tests/tests_files/or_gate.nts"));
    argv.push_back(std::string("a=0"));
    argv.push_back(std::string("b=0"));
    nts::Parser ParserEngine(argv);
    ParserEngine.dump(std::string(""));
    cr_assert_stdout_eq_str("s=0\n\n"
                            "**** OUTPUT ****\n"
                            "s\n"
                            "Pin 1 which is false is linked to no component\n"
                            "\n"
                            "\n"
                            "**** INPUT ****\n"
                            "a\n"
                            "Pin 1 which is false is linked to pin 1 of or\n"
                            "\n"
                            "b\n"
                            "Pin 1 which is false is linked to pin 2 of or\n"
                            "\n"
                            "\n"
                            "**** COMPONENTS ****\n"
                            "or\n"
                            "Pin 1 which is false is linked to no component\n"
                            "Pin 2 which is false is linked to no component\n"
                            "Pin 3 which is false is linked to pin 1 of s\n"
                            "Pin 4 which is undefined is linked to no component\n"
                            "Pin 5 which is undefined is linked to no component\n"
                            "Pin 6 which is undefined is linked to no component\n"
                            "Pin 7 which is undefined is linked to no component\n"
                            "Pin 8 which is undefined is linked to no component\n"
                            "Pin 9 which is undefined is linked to no component\n"
                            "Pin 10 which is undefined is linked to no component\n"
                            "Pin 11 which is undefined is linked to no component\n"
                            "Pin 12 which is undefined is linked to no component\n"
                            "Pin 13 which is undefined is linked to no component\n"
                            "\n"
                            "\n"
                            "**** CLOCKS ****\n");
}