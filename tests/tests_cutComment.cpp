/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(cutComment, test00, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string(".chipsets: #Simple comment");
    nts::Parser ParserEngine(argv);

    ParserEngine.cutComment(string);
    cr_assert_eq(string, ".chipsets: ");
}

Test(cutComment, test01, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string("#.chipsets: #Simple comment");
    nts::Parser ParserEngine(argv);

    ParserEngine.cutComment(string);
    cr_assert_eq(string, "");
}

Test(cutComment, test02, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string(".chipsets:   #   S  imple comment # Other COmment");
    nts::Parser ParserEngine(argv);

    ParserEngine.cutComment(string);
    cr_assert_eq(string, ".chipsets:   ");
}

Test(cutComment, test03, .init=redirect_all_std)
{
    std::vector<std::string> argv;
    argv.push_back(std::string("./nanotekspice"));
    std::string string(".chipsets: #Simple \ncomment");
    nts::Parser ParserEngine(argv);

    ParserEngine.cutComment(string);
    cr_assert_eq(string, ".chipsets: ");
}