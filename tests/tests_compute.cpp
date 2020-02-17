/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(compute, test00, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::FalseComponent("false1");
    nts::IComponent *component2 = new nts::OutputComponent("output1");

    component->setLink(1, *component2, 1);
    component->compute();
    component2->dump();
    cr_assert_stdout_eq_str("Pin 1 which is false is linked to no component\n");
}

Test(compute, test01, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::FalseComponent("true1");
    nts::IComponent *component2 = new nts::OutputComponent("output1");

    component->setLink(1, *component2, 1);
    component->compute();
    component2->dump();
    cr_assert_stdout_eq_str("Pin 1 which is false is linked to no component\n");
}

Test(compute, test02, .init=redirect_all_std)
{
    nts::IComponent *component2 = new nts::OutputComponent("output1");

    component2->setTristatePin(1, nts::FALSE);
    component2->compute();
    component2->dump();
    cr_assert_stdout_eq_str("Pin 1 which is false is linked to no component\n");
}

Test(compute, test03, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::ClockComponent("true1");
    nts::IComponent *component2 = new nts::OutputComponent("output1");

    component->setLink(1, *component2, 1);
    component->setTristatePin(1, nts::FALSE);
    try {
        component->compute(2);
    } catch (nts::ComponentError &e) {
        cr_assert(std::string(e.what()) == "Invalid number of pins");
        cr_assert(e.getComponent() == "compute");
    }
    component2->dump();
    cr_assert_stdout_eq_str("Pin 1 which is undefined is linked to no component\n");
}