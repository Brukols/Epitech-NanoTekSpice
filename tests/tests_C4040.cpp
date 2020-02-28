/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(C4040, test00, .init=redirect_all_std)
{
    nts::C4040 *component = new nts::C4040("4040");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *q9 = new nts::OutputComponent("output");
    nts::OutputComponent *q10 = new nts::OutputComponent("output");
    nts::OutputComponent *q11 = new nts::OutputComponent("output");
    nts::OutputComponent *q12 = new nts::OutputComponent("output");
    
    component->setLink(1, *q12, 1);
    component->setLink(2, *q6, 1);
    component->setLink(3, *q5, 1);
    component->setLink(4, *q7, 1);
    component->setLink(5, *q4, 1);
    component->setLink(6, *q3, 1);
    component->setLink(7, *q2, 1);
    component->setLink(9, *q1, 1);
    component->setLink(12, *q9, 1);
    component->setLink(13, *q8, 1);
    component->setLink(14, *q10, 1);
    component->setLink(15, *q11, 1);

    component->setTristatePin(11, nts::TRUE);
    component->run();

    cr_assert(q1->getTristate() == nts::FALSE);
    cr_assert(q2->getTristate() == nts::FALSE);
    cr_assert(q3->getTristate() == nts::FALSE);
    cr_assert(q4->getTristate() == nts::FALSE);
    cr_assert(q5->getTristate() == nts::FALSE);
    cr_assert(q6->getTristate() == nts::FALSE);
    cr_assert(q7->getTristate() == nts::FALSE);
    cr_assert(q8->getTristate() == nts::FALSE);
    cr_assert(q9->getTristate() == nts::FALSE);
    cr_assert(q10->getTristate() == nts::FALSE);
    cr_assert(q11->getTristate() == nts::FALSE);
    cr_assert(q12->getTristate() == nts::FALSE);

    delete component;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete q9;
    delete q10;
    delete q11;
    delete q12;
}

Test(C4040, test01, .init=redirect_all_std)
{
    nts::C4040 *component = new nts::C4040("4040");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *q9 = new nts::OutputComponent("output");
    nts::OutputComponent *q10 = new nts::OutputComponent("output");
    nts::OutputComponent *q11 = new nts::OutputComponent("output");
    nts::OutputComponent *q12 = new nts::OutputComponent("output");
    
    component->setLink(1, *q12, 1);
    component->setLink(2, *q6, 1);
    component->setLink(3, *q5, 1);
    component->setLink(4, *q7, 1);
    component->setLink(5, *q4, 1);
    component->setLink(6, *q3, 1);
    component->setLink(7, *q2, 1);
    component->setLink(9, *q1, 1);
    component->setLink(12, *q9, 1);
    component->setLink(13, *q8, 1);
    component->setLink(14, *q10, 1);
    component->setLink(15, *q11, 1);

    component->setTristatePin(11, nts::TRUE);
    component->run();
    component->setTristatePin(11, nts::FALSE);
    component->setTristatePin(10, nts::TRUE);
    component->run();

    cr_assert(q1->getTristate() == nts::FALSE);
    cr_assert(q2->getTristate() == nts::FALSE);
    cr_assert(q3->getTristate() == nts::FALSE);
    cr_assert(q4->getTristate() == nts::FALSE);
    cr_assert(q5->getTristate() == nts::FALSE);
    cr_assert(q6->getTristate() == nts::FALSE);
    cr_assert(q7->getTristate() == nts::FALSE);
    cr_assert(q8->getTristate() == nts::FALSE);
    cr_assert(q9->getTristate() == nts::FALSE);
    cr_assert(q10->getTristate() == nts::FALSE);
    cr_assert(q11->getTristate() == nts::FALSE);
    cr_assert(q12->getTristate() == nts::FALSE);

    delete component;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete q9;
    delete q10;
    delete q11;
    delete q12;
}

Test(C4040, test02, .init=redirect_all_std)
{
    nts::C4040 *component = new nts::C4040("4040");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *q9 = new nts::OutputComponent("output");
    nts::OutputComponent *q10 = new nts::OutputComponent("output");
    nts::OutputComponent *q11 = new nts::OutputComponent("output");
    nts::OutputComponent *q12 = new nts::OutputComponent("output");
    
    component->setLink(1, *q12, 1);
    component->setLink(2, *q6, 1);
    component->setLink(3, *q5, 1);
    component->setLink(4, *q7, 1);
    component->setLink(5, *q4, 1);
    component->setLink(6, *q3, 1);
    component->setLink(7, *q2, 1);
    component->setLink(9, *q1, 1);
    component->setLink(12, *q9, 1);
    component->setLink(13, *q8, 1);
    component->setLink(14, *q10, 1);
    component->setLink(15, *q11, 1);

    component->setTristatePin(11, nts::FALSE);
    component->setTristatePin(10, nts::FALSE);
    component->run();

    cr_assert(q1->getTristate() == nts::FALSE);
    cr_assert(q2->getTristate() == nts::FALSE);
    cr_assert(q3->getTristate() == nts::FALSE);
    cr_assert(q4->getTristate() == nts::FALSE);
    cr_assert(q5->getTristate() == nts::FALSE);
    cr_assert(q6->getTristate() == nts::FALSE);
    cr_assert(q7->getTristate() == nts::FALSE);
    cr_assert(q8->getTristate() == nts::FALSE);
    cr_assert(q9->getTristate() == nts::FALSE);
    cr_assert(q10->getTristate() == nts::FALSE);
    cr_assert(q11->getTristate() == nts::FALSE);
    cr_assert(q12->getTristate() == nts::FALSE);

    delete component;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete q9;
    delete q10;
    delete q11;
    delete q12;
}

Test(C4040, test03, .init=redirect_all_std)
{
    nts::C4040 *component = new nts::C4040("4040");
    nts::OutputComponent *q1 = new nts::OutputComponent("output");
    nts::OutputComponent *q2 = new nts::OutputComponent("output");
    nts::OutputComponent *q3 = new nts::OutputComponent("output");
    nts::OutputComponent *q4 = new nts::OutputComponent("output");
    nts::OutputComponent *q5 = new nts::OutputComponent("output");
    nts::OutputComponent *q6 = new nts::OutputComponent("output");
    nts::OutputComponent *q7 = new nts::OutputComponent("output");
    nts::OutputComponent *q8 = new nts::OutputComponent("output");
    nts::OutputComponent *q9 = new nts::OutputComponent("output");
    nts::OutputComponent *q10 = new nts::OutputComponent("output");
    nts::OutputComponent *q11 = new nts::OutputComponent("output");
    nts::OutputComponent *q12 = new nts::OutputComponent("output");
    
    component->setLink(1, *q12, 1);
    component->setLink(2, *q6, 1);
    component->setLink(3, *q5, 1);
    component->setLink(4, *q7, 1);
    component->setLink(5, *q4, 1);
    component->setLink(6, *q3, 1);
    component->setLink(7, *q2, 1);
    component->setLink(9, *q1, 1);
    component->setLink(12, *q9, 1);
    component->setLink(13, *q8, 1);
    component->setLink(14, *q10, 1);
    component->setLink(15, *q11, 1);

    component->run();

    cr_assert(q1->getTristate() == nts::FALSE);
    cr_assert(q2->getTristate() == nts::FALSE);
    cr_assert(q3->getTristate() == nts::FALSE);
    cr_assert(q4->getTristate() == nts::FALSE);
    cr_assert(q5->getTristate() == nts::FALSE);
    cr_assert(q6->getTristate() == nts::FALSE);
    cr_assert(q7->getTristate() == nts::FALSE);
    cr_assert(q8->getTristate() == nts::FALSE);
    cr_assert(q9->getTristate() == nts::FALSE);
    cr_assert(q10->getTristate() == nts::FALSE);
    cr_assert(q11->getTristate() == nts::FALSE);
    cr_assert(q12->getTristate() == nts::FALSE);

    delete component;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete q6;
    delete q7;
    delete q8;
    delete q9;
    delete q10;
    delete q11;
    delete q12;
}