/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(C4017, test00)
{
    nts::C4017 *component = new nts::C4017("4017");
    nts::OutputComponent *q0 = new nts::OutputComponent("output");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *q9 = new nts::OutputComponent("output");
    nts::OutputComponent *q59 = new nts::OutputComponent("output");

    component->setLink(3, *q0, 1);
    component->setLink(2, *q1, 1);
    component->setLink(4, *q2, 1);
    component->setLink(7, *q3, 1);
    component->setLink(10, *q4, 1);
    component->setLink(1, *q5, 1);
    component->setLink(5, *q6, 1);
    component->setLink(6, *q7, 1);
    component->setLink(9, *q8, 1);
    component->setLink(11, *q9, 1);
    component->setLink(12, *q59, 1);

    component->setTristatePin(15, nts::TRUE);
    component->setTristatePin(14, nts::TRUE);
    component->setTristatePin(13, nts::FALSE);
    component->setClockState(14);
    component->setClockState(13);
    component->run();

    cr_assert(q0->getTristate() == nts::TRUE);
    cr_assert(q1->getTristate() == nts::FALSE);
    cr_assert(q2->getTristate() == nts::FALSE);
    cr_assert(q3->getTristate() == nts::FALSE);
    cr_assert(q4->getTristate() == nts::FALSE);
    cr_assert(q5->getTristate() == nts::FALSE);
    cr_assert(q6->getTristate() == nts::FALSE);
    cr_assert(q7->getTristate() == nts::FALSE);
    cr_assert(q8->getTristate() == nts::FALSE);
    cr_assert(q9->getTristate() == nts::FALSE);
    cr_assert(q59->getTristate() == nts::TRUE);

    delete component;
    delete q0;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete q9;
    delete q59;
}

Test(C4017, test01)
{
    nts::C4017 *component = new nts::C4017("4017");
    nts::OutputComponent *q0 = new nts::OutputComponent("output");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *q9 = new nts::OutputComponent("output");
    nts::OutputComponent *q59 = new nts::OutputComponent("output");

    component->setLink(3, *q0, 1);
    component->setLink(2, *q1, 1);
    component->setLink(4, *q2, 1);
    component->setLink(7, *q3, 1);
    component->setLink(10, *q4, 1);
    component->setLink(1, *q5, 1);
    component->setLink(5, *q6, 1);
    component->setLink(6, *q7, 1);
    component->setLink(9, *q8, 1);
    component->setLink(11, *q9, 1);
    component->setLink(12, *q59, 1);

    component->setTristatePin(15, nts::TRUE);
    component->setTristatePin(14, nts::TRUE);
    component->setTristatePin(13, nts::FALSE);
    component->setClockState(14);
    component->setClockState(13);
    component->run();
    component->setTristatePin(15, nts::FALSE);
    component->run();

    cr_assert(q0->getTristate() == nts::FALSE);
    cr_assert(q1->getTristate() == nts::TRUE);
    cr_assert(q2->getTristate() == nts::FALSE);
    cr_assert(q3->getTristate() == nts::FALSE);
    cr_assert(q4->getTristate() == nts::FALSE);
    cr_assert(q5->getTristate() == nts::FALSE);
    cr_assert(q6->getTristate() == nts::FALSE);
    cr_assert(q7->getTristate() == nts::FALSE);
    cr_assert(q8->getTristate() == nts::FALSE);
    cr_assert(q9->getTristate() == nts::FALSE);
    cr_assert(q59->getTristate() == nts::TRUE);

    delete component;
    delete q0;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete q9;
    delete q59;
}

Test(C4017, test02)
{
    nts::C4017 *component = new nts::C4017("4017");

    component->setTristatePin(14, nts::FALSE);
    component->setTristatePin(13, nts::TRUE);
    component->setClockState(14);
    component->setClockState(13);
    component->run();

    cr_assert(component->getTristate(13) == nts::TRUE);

    delete component;
}