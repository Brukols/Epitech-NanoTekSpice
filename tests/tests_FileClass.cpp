/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(FileClass, test00, .init=redirect_all_std)
{
    nts::File test("tests/tests_files/openFile");
}

Test(FileClass, test01, .init=redirect_all_std)
{
    try {
        nts::File test("tests/tests_files/openFil");
    } catch (nts::NTSError const &e) {
        cr_assert_str_eq(e.what(), "This file doesn't exist");
    }
}

Test(FileClass, test02, .init=redirect_all_std)
{
    nts::File test("tests/tests_files/openFile");
    std::string line;
    test.getDataLine(line);
    cr_assert_str_eq(line.c_str(), "Hello");
    test.getDataLine(line);
    cr_assert_str_eq(line.c_str(), "World");
    test.getDataLine(line);
    cr_assert_str_eq(line.c_str(), "!");
    line.clear();
    test.getDataLine(line);
    cr_assert_str_eq(line.c_str(), "");
}