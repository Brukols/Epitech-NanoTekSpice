/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(C4008, test00, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    component->run();

    cr_assert(s1->getTristate() == nts::UNDEFINED);
    cr_assert(s2->getTristate() == nts::UNDEFINED);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::UNDEFINED);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test01, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::UNDEFINED);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test02, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::UNDEFINED);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test03, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::UNDEFINED);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test04, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::UNDEFINED);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test05, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::UNDEFINED);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test06, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::UNDEFINED);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test07, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::UNDEFINED);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}


// A = 5, B = 4

Test(C4008, test08, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);

    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::FALSE);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test09, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(4, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::TRUE);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test10, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(4, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::FALSE);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test11, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);

    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(4, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::TRUE);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test12, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(4, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::TRUE);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test13, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);

    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(4, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::FALSE);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test14, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);

    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::TRUE);
    cr_assert(s3->getTristate() == nts::UNDEFINED);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}


// A = 3, B = 2

Test(C4008, test15, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);

    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);

    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(2, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::FALSE);
    cr_assert(s3->getTristate() == nts::FALSE);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test16, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(2, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::FALSE);
    cr_assert(s3->getTristate() == nts::TRUE);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test17, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::FALSE);
    cr_assert(s3->getTristate() == nts::FALSE);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test18, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);

    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(4, nts::TRUE);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::TRUE);
    cr_assert(s3->getTristate() == nts::TRUE);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test19, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);

    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(2, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::FALSE);
    cr_assert(s3->getTristate() == nts::TRUE);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test20, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);

    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(4, nts::TRUE);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(2, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::TRUE);
    cr_assert(s3->getTristate() == nts::FALSE);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test21, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);

    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(4, nts::TRUE);

    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(2, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::TRUE);
    cr_assert(s3->getTristate() == nts::TRUE);
    cr_assert(s4->getTristate() == nts::UNDEFINED);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}


// A = 1, B = 15

Test(C4008, test22, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);

    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);

    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(2, nts::FALSE);

    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(15, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::FALSE);
    cr_assert(s3->getTristate() == nts::FALSE);
    cr_assert(s4->getTristate() == nts::FALSE);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test23, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);

    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(2, nts::FALSE);

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(15, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::FALSE);
    cr_assert(s3->getTristate() == nts::FALSE);
    cr_assert(s4->getTristate() == nts::TRUE);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test24, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(15, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::FALSE);
    cr_assert(s3->getTristate() == nts::FALSE);
    cr_assert(s4->getTristate() == nts::FALSE);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test25, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);

    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(4, nts::TRUE);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(15, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::TRUE);
    cr_assert(s3->getTristate() == nts::TRUE);
    cr_assert(s4->getTristate() == nts::TRUE);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test26, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(7, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);

    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);

    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(2, nts::FALSE);

    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(15, nts::TRUE);
    component->run();

    cr_assert(s1->getTristate() == nts::FALSE);
    cr_assert(s2->getTristate() == nts::FALSE);
    cr_assert(s3->getTristate() == nts::FALSE);
    cr_assert(s4->getTristate() == nts::TRUE);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test27, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);

    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(4, nts::TRUE);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(15, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::TRUE);
    cr_assert(s3->getTristate() == nts::TRUE);
    cr_assert(s4->getTristate() == nts::FALSE);
    cr_assert(co->getTristate() == nts::TRUE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}

Test(C4008, test28, .init=redirect_all_std)
{
    nts::C4008 *component = new nts::C4008("4008");
    nts::OutputComponent *s1 = new nts::OutputComponent("output");
    nts::OutputComponent *s2 = new nts::OutputComponent("output");
    nts::OutputComponent *s3 = new nts::OutputComponent("output");
    nts::OutputComponent *s4 = new nts::OutputComponent("output");
    nts::OutputComponent *co = new nts::OutputComponent("output");

    component->setLink(10, *s1, 1);
    component->setLink(11, *s2, 1);
    component->setLink(12, *s3, 1);
    component->setLink(13, *s4, 1);
    component->setLink(14, *co, 1);
    
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(7, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);

    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(4, nts::TRUE);

    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);

    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(15, nts::FALSE);
    component->run();

    cr_assert(s1->getTristate() == nts::TRUE);
    cr_assert(s2->getTristate() == nts::TRUE);
    cr_assert(s3->getTristate() == nts::TRUE);
    cr_assert(s4->getTristate() == nts::TRUE);
    cr_assert(co->getTristate() == nts::FALSE);
    delete component;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete co;
}