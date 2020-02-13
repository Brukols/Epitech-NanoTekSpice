/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(isInput, test00, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::InputComponent("Input");

    cr_assert(nts::Utility::isInput(component) == true);
}

Test(isInput, test01, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::OutputComponent("Input");

    cr_assert(nts::Utility::isInput(component) == false);
}

Test(isFalse, test00, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::FalseComponent("Input");

    cr_assert(nts::Utility::isFalse(component) == true);
}

Test(isFalse, test01, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::ClockComponent("Input");

    cr_assert(nts::Utility::isFalse(component) == false);
}

Test(isTrue, test00, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::TrueComponent("Input");

    cr_assert(nts::Utility::isTrue(component) == true);
}

Test(isTrue, test01, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::ClockComponent("Input");

    cr_assert(nts::Utility::isTrue(component) == false);
}

Test(isClock, test00, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::ClockComponent("Input");

    cr_assert(nts::Utility::isClock(component) == true);
}

Test(isClock, test01, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::FalseComponent("Input");

    cr_assert(nts::Utility::isClock(component) == false);
}

Test(isOutput, test00, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::OutputComponent("Input");

    cr_assert(nts::Utility::isOutput(component) == true);
}

Test(isOutput, test01, .init=redirect_all_std)
{
    nts::IComponent *component = new nts::ClockComponent("Input");

    cr_assert(nts::Utility::isOutput(component) == false);
}