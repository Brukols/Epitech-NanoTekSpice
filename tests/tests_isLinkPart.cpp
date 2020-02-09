/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(isLinkPart, test00, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string(".links: #Simple comment");
    nts::Parser ParserEngine(argv);

    cr_assert_eq(ParserEngine.isLinkPart(string), true);
}

Test(isLinkPart, test01, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string("");
    nts::Parser ParserEngine(argv);

    cr_assert_eq(ParserEngine.isLinkPart(string), false);
}

Test(isLinkPart, test02, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string("#.links: #Simple comment");
    nts::Parser ParserEngine(argv);

    cr_assert_eq(ParserEngine.isLinkPart(string), true);
}

Test(isLinkPart, test03, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string(".links #Simple comment");
    nts::Parser ParserEngine(argv);

    cr_assert_eq(ParserEngine.isLinkPart(string), false);
}