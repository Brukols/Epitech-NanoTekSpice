/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(C4069, test00, .init=redirect_all_std)
{
    nts::C4069 *component = new nts::C4069("4069");
    nts::OutputComponent *o1 = new nts::OutputComponent("output");
    nts::OutputComponent *o2 = new nts::OutputComponent("output");
    nts::OutputComponent *o3 = new nts::OutputComponent("output");
    nts::OutputComponent *o4 = new nts::OutputComponent("output");
    nts::OutputComponent *o5 = new nts::OutputComponent("output");
    nts::OutputComponent *o6 = new nts::OutputComponent("output");

    component->setLink(2, *o1, 1);
    component->setLink(4, *o2, 1);
    component->setLink(6, *o3, 1);
    component->setLink(8, *o4, 1);
    component->setLink(10, *o5, 1);
    component->setLink(12, *o6, 1);

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(5, nts::UNDEFINED);
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(11, nts::FALSE);
    component->setTristatePin(13, nts::UNDEFINED);

    component->run();

    cr_assert(o1->getTristate() == nts::FALSE);
    cr_assert(o2->getTristate() == nts::TRUE);
    cr_assert(o3->getTristate() == nts::UNDEFINED);
    cr_assert(o4->getTristate() == nts::FALSE);
    cr_assert(o5->getTristate() == nts::TRUE);
    cr_assert(o6->getTristate() == nts::UNDEFINED);

    delete component;
    delete o1;
    delete o2;
    delete o3;
    delete o4;
    delete o5;
    delete o6;
}