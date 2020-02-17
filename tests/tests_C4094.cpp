/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(C4094, test00)
{
    nts::C4094 *component = new nts::C4094("4094");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *qs = new nts::OutputComponent("output");
    nts::OutputComponent *_qs = new nts::OutputComponent("output");

    component->setLink(4, *q1, 1);
    component->setLink(5, *q2, 1);
    component->setLink(6, *q3, 1);
    component->setLink(7, *q4, 1);
    component->setLink(14, *q5, 1);
    component->setLink(13, *q6, 1);
    component->setLink(12, *q7, 1);
    component->setLink(11, *q8, 1);
    component->setLink(9, *qs, 1);
    component->setLink(10, *_qs, 1);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(15, nts::FALSE);
    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(2, nts::UNDEFINED);

    component->run();

    cr_assert(q1->getTristate() == nts::UNDEFINED);
    cr_assert(q2->getTristate() == nts::UNDEFINED);
    cr_assert(q3->getTristate() == nts::UNDEFINED);
    cr_assert(q4->getTristate() == nts::UNDEFINED);
    cr_assert(q5->getTristate() == nts::UNDEFINED);
    cr_assert(q6->getTristate() == nts::UNDEFINED);
    cr_assert(q7->getTristate() == nts::UNDEFINED);
    cr_assert(q8->getTristate() == nts::UNDEFINED);
    cr_assert(qs->getTristate() == nts::UNDEFINED);
    cr_assert(_qs->getTristate() == nts::UNDEFINED);

    delete component;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete qs;
    delete _qs;
}

Test(C4094, test01)
{
    nts::C4094 *component = new nts::C4094("4094");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *qs = new nts::OutputComponent("output");
    nts::OutputComponent *_qs = new nts::OutputComponent("output");

    component->setLink(4, *q1, 1);
    component->setLink(5, *q2, 1);
    component->setLink(6, *q3, 1);
    component->setLink(7, *q4, 1);
    component->setLink(14, *q5, 1);
    component->setLink(13, *q6, 1);
    component->setLink(12, *q7, 1);
    component->setLink(11, *q8, 1);
    component->setLink(9, *qs, 1);
    component->setLink(10, *_qs, 1);

    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(15, nts::FALSE);
    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(2, nts::UNDEFINED);

    component->run();

    cr_assert(q1->getTristate() == nts::UNDEFINED);
    cr_assert(q2->getTristate() == nts::UNDEFINED);
    cr_assert(q3->getTristate() == nts::UNDEFINED);
    cr_assert(q4->getTristate() == nts::UNDEFINED);
    cr_assert(q5->getTristate() == nts::UNDEFINED);
    cr_assert(q6->getTristate() == nts::UNDEFINED);
    cr_assert(q7->getTristate() == nts::UNDEFINED);
    cr_assert(q8->getTristate() == nts::UNDEFINED);
    cr_assert(qs->getTristate() == nts::UNDEFINED);
    cr_assert(_qs->getTristate() == nts::UNDEFINED);

    delete component;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete qs;
    delete _qs;
}

Test(C4094, test02)
{
    nts::C4094 *component = new nts::C4094("4094");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *qs = new nts::OutputComponent("output");
    nts::OutputComponent *_qs = new nts::OutputComponent("output");

    component->setLink(4, *q1, 1);
    component->setLink(5, *q2, 1);
    component->setLink(6, *q3, 1);
    component->setLink(7, *q4, 1);
    component->setLink(14, *q5, 1);
    component->setLink(13, *q6, 1);
    component->setLink(12, *q7, 1);
    component->setLink(11, *q8, 1);
    component->setLink(9, *qs, 1);
    component->setLink(10, *_qs, 1);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(15, nts::TRUE);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::FALSE);

    component->run();

    cr_assert(q1->getTristate() == nts::FALSE);
    cr_assert(q2->getTristate() == nts::FALSE);
    cr_assert(q3->getTristate() == nts::FALSE);
    cr_assert(q4->getTristate() == nts::FALSE);
    cr_assert(q5->getTristate() == nts::FALSE);
    cr_assert(q6->getTristate() == nts::FALSE);
    cr_assert(q7->getTristate() == nts::FALSE);
    cr_assert(q8->getTristate() == nts::FALSE);
    cr_assert(qs->getTristate() == nts::FALSE);
    cr_assert(_qs->getTristate() == nts::UNDEFINED);

    delete component;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete qs;
    delete _qs;
}

Test(C4094, test03)
{
    nts::C4094 *component = new nts::C4094("4094");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *qs = new nts::OutputComponent("output");
    nts::OutputComponent *_qs = new nts::OutputComponent("output");

    component->setLink(4, *q1, 1);
    component->setLink(5, *q2, 1);
    component->setLink(6, *q3, 1);
    component->setLink(7, *q4, 1);
    component->setLink(14, *q5, 1);
    component->setLink(13, *q6, 1);
    component->setLink(12, *q7, 1);
    component->setLink(11, *q8, 1);
    component->setLink(9, *qs, 1);
    component->setLink(10, *_qs, 1);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(15, nts::TRUE);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);

    component->run();

    cr_assert(q1->getTristate() == nts::TRUE);
    cr_assert(q2->getTristate() == nts::TRUE);
    cr_assert(q3->getTristate() == nts::TRUE);
    cr_assert(q4->getTristate() == nts::TRUE);
    cr_assert(q5->getTristate() == nts::TRUE);
    cr_assert(q6->getTristate() == nts::TRUE);
    cr_assert(q7->getTristate() == nts::TRUE);
    cr_assert(q8->getTristate() == nts::TRUE);
    cr_assert(qs->getTristate() == nts::TRUE);
    cr_assert(_qs->getTristate() == nts::UNDEFINED);

    delete component;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete qs;
    delete _qs;
}

Test(C4094, test04)
{
    nts::C4094 *component = new nts::C4094("4094");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *qs = new nts::OutputComponent("output");
    nts::OutputComponent *_qs = new nts::OutputComponent("output");

    component->setLink(4, *q1, 1);
    component->setLink(5, *q2, 1);
    component->setLink(6, *q3, 1);
    component->setLink(7, *q4, 1);
    component->setLink(14, *q5, 1);
    component->setLink(13, *q6, 1);
    component->setLink(12, *q7, 1);
    component->setLink(11, *q8, 1);
    component->setLink(9, *qs, 1);
    component->setLink(10, *_qs, 1);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(15, nts::TRUE);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);

    component->run();

    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(15, nts::TRUE);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);

    component->run();

    cr_assert(q1->getTristate() == nts::TRUE);
    cr_assert(q2->getTristate() == nts::TRUE);
    cr_assert(q3->getTristate() == nts::TRUE);
    cr_assert(q4->getTristate() == nts::TRUE);
    cr_assert(q5->getTristate() == nts::TRUE);
    cr_assert(q6->getTristate() == nts::TRUE);
    cr_assert(q7->getTristate() == nts::TRUE);
    cr_assert(q8->getTristate() == nts::TRUE);
    cr_assert(qs->getTristate() == nts::TRUE);
    cr_assert(_qs->getTristate() == nts::TRUE);

    delete component;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete qs;
    delete _qs;
}

Test(C4094, test05)
{
    nts::C4094 *component = new nts::C4094("4094");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *qs = new nts::OutputComponent("output");
    nts::OutputComponent *_qs = new nts::OutputComponent("output");

    component->setLink(4, *q1, 1);
    component->setLink(5, *q2, 1);
    component->setLink(6, *q3, 1);
    component->setLink(7, *q4, 1);
    component->setLink(14, *q5, 1);
    component->setLink(13, *q6, 1);
    component->setLink(12, *q7, 1);
    component->setLink(11, *q8, 1);
    component->setLink(9, *qs, 1);
    component->setLink(10, *_qs, 1);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(15, nts::TRUE);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::FALSE);

    component->run();

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(15, nts::TRUE);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::FALSE);

    component->run();

    cr_assert(q1->getTristate() == nts::FALSE);
    cr_assert(q2->getTristate() == nts::FALSE);
    cr_assert(q3->getTristate() == nts::FALSE);
    cr_assert(q4->getTristate() == nts::FALSE);
    cr_assert(q5->getTristate() == nts::FALSE);
    cr_assert(q6->getTristate() == nts::FALSE);
    cr_assert(q7->getTristate() == nts::FALSE);
    cr_assert(q8->getTristate() == nts::FALSE);
    cr_assert(qs->getTristate() == nts::FALSE);
    cr_assert(_qs->getTristate() == nts::UNDEFINED);

    delete component;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete qs;
    delete _qs;
}