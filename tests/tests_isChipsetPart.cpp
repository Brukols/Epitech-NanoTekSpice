/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(isChipsetPart, test00, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string(".chipsets: #Simple comment");
    nts::Parser ParserEngine(argv);

    cr_assert_eq(ParserEngine.isChipsetPart(string), true);
}

Test(isChipsetPart, test01, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string("");
    nts::Parser ParserEngine(argv);

    cr_assert_eq(ParserEngine.isChipsetPart(string), false);
}

Test(isChipsetPart, test02, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string("#.chipsets: #Simple comment");
    nts::Parser ParserEngine(argv);

    cr_assert_eq(ParserEngine.isChipsetPart(string), true);
}

Test(isChipsetPart, test03, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string(".chipsets #Simple comment");
    nts::Parser ParserEngine(argv);

    cr_assert_eq(ParserEngine.isChipsetPart(string), false);
}