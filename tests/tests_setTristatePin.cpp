/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(setTristatePin, test00, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::FalseComponent("false1");

    component->setTristatePin(1, nts::TRUE);
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is false is linked to no component\n");
    delete component;
}

Test(setTristatePin, test01, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::TrueComponent("true1");

    component->setTristatePin(1, nts::FALSE);
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is true is linked to no component\n");
    delete component;
}

Test(setTristatePin, test02, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::ClockComponent("clock1");

    component->setTristatePin(1, nts::TRUE);
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is true is linked to no component\n");
    delete component;
}

Test(setTristatePin, test03, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::ClockComponent("clock1");

    try {
        component->setTristatePin(2, nts::TRUE);
    } catch(const nts::ComponentError& e) {
        cr_assert(std::string(e.what()) == "Invalid number of pins");
        cr_assert(e.getComponent() == "setTristatePin");
    }
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is undefined is linked to no component\n");
    delete component;
}

Test(setTristatePin, test04, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::ClockComponent("clock1");

    component->setTristatePin(1, nts::FALSE);
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is false is linked to no component\n");
    delete component;
}

Test(setTristatePin, test05, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::OutputComponent("output1");

    component->setTristatePin(1, nts::FALSE);
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is false is linked to no component\n");
    delete component;
}

Test(setTristatePin, test06, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::OutputComponent("output1");

    component->setTristatePin(1, nts::TRUE);
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is true is linked to no component\n");
    delete component;
}

Test(setTristatePin, test07, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::OutputComponent("output1");

    try {
        component->setTristatePin(2, nts::TRUE);
    } catch(const nts::ComponentError& e) {
        cr_assert(std::string(e.what()) == "Invalid number of pins");
        cr_assert(e.getComponent() == "setTristatePin");
    }
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is undefined is linked to no component\n");
    delete component;
}

Test(setTristatePin, test08, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::OutputComponent("output1");

    try {
        component->setTristatePin(2, nts::TRUE);
    } catch(const nts::ComponentError& e) {
        cr_assert(std::string(e.what()) == "Invalid number of pins");
        cr_assert(e.getComponent() == "setTristatePin");
    }
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is undefined is linked to no component\n");
    delete component;
}


Test(setTristatePin, test09, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::InputComponent("output1");

    component->setTristatePin(1, nts::FALSE);
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is false is linked to no component\n");
    delete component;
}

Test(setTristatePin, test10, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::InputComponent("output1");

    component->setTristatePin(1, nts::TRUE);
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is true is linked to no component\n");
    delete component;
}

Test(setTristatePin, test11, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::InputComponent("output1");

    try {
        component->setTristatePin(2, nts::TRUE);
    } catch(const nts::ComponentError& e) {
        cr_assert(std::string(e.what()) == "Invalid number of pins");
        cr_assert(e.getComponent() == "setTristatePin");
    }
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is undefined is linked to no component\n");
    delete component;
}

Test(setTristatePin, test12, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::InputComponent("output1");

    try {
        component->setTristatePin(2, nts::TRUE);
    } catch(const nts::ComponentError& e) {
        cr_assert(std::string(e.what()) == "Invalid number of pins");
        cr_assert(e.getComponent() == "setTristatePin");
    }
    component->dump();
    cr_assert_stdout_eq_str("Pin 1 which is undefined is linked to no component\n");
    delete component;
}