/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(C4030, test00, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test01)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::FALSE);
    component->run();

    cr_assert(component->getTristate(3) == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test02, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test03, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4030, test04, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(2, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}

Test(C4030, test05, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(2, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4030, test06, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}


Test(C4030, test07, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test08)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(6, nts::FALSE);
    component->run();

    cr_assert(component->getTristate(3) == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test09, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(5, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test10, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4030, test11, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}

Test(C4030, test12, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(6, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4030, test13, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}


Test(C4030, test14, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test15)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(9, nts::FALSE);
    component->run();

    cr_assert(component->getTristate(3) == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test16, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(9, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test17, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(8, nts::TRUE);
    component->setTristatePin(9, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4030, test18, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(8, nts::FALSE);
    component->setTristatePin(9, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}

Test(C4030, test19, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(8, nts::FALSE);
    component->setTristatePin(9, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4030, test20, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(8, nts::TRUE);
    component->setTristatePin(9, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}


Test(C4030, test21, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test22)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(13, nts::FALSE);
    component->run();

    cr_assert(component->getTristate(3) == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test23, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(12, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4030, test24, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(12, nts::TRUE);
    component->setTristatePin(13, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4030, test25, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(12, nts::FALSE);
    component->setTristatePin(13, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}

Test(C4030, test26, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(12, nts::FALSE);
    component->setTristatePin(13, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4030, test27, .init=redirect_all_std)
{
    nts::C4030 *component = new nts::C4030("4030");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(12, nts::TRUE);
    component->setTristatePin(13, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}