/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(setLink, test00, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::FalseComponent("False1");
    nts::IComponent *component2 = new nts::OutputComponent("Output1");

    component->setLink(1, *component2, 1);
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is false is linked to pin 1 of Output1\n");
}

Test(setLink, test01, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::TrueComponent("True1");
    nts::IComponent *component2 = new nts::OutputComponent("Output1");

    component->setLink(1, *component2, 1);
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is true is linked to pin 1 of Output1\n");
}

Test(setLink, test02, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::InputComponent("Input1");
    nts::IComponent *component2 = new nts::OutputComponent("Output1");

    component->setLink(1, *component2, 1);
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is undefined is linked to pin 1 of Output1\n");
}