/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(C4011, test00, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4011, test01)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::FALSE);
    component->run();

    cr_assert(component->getTristate(3) == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test02, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test03, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test04, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(2, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test05, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(2, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test06, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(3, *j, 1);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}


Test(C4011, test07, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4011, test08, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(5, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test09, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(5, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test10, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test11, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test12, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(6, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test13, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(4, *j, 1);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}


Test(C4011, test14, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4011, test15, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(8, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test16, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(8, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test17, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(8, nts::TRUE);
    component->setTristatePin(9, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test18, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(8, nts::FALSE);
    component->setTristatePin(9, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test19, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(8, nts::FALSE);
    component->setTristatePin(9, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test20, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(10, *j, 1);
    component->setTristatePin(8, nts::TRUE);
    component->setTristatePin(9, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}


Test(C4011, test21, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->run();
    
    cr_assert(j->getTristate() == nts::UNDEFINED);
    delete component;
    delete j;
}

Test(C4011, test22, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(12, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test23, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(12, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test24, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(12, nts::TRUE);
    component->setTristatePin(13, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test25, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(12, nts::FALSE);
    component->setTristatePin(13, nts::FALSE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test26, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(12, nts::FALSE);
    component->setTristatePin(13, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::TRUE);
    delete component;
    delete j;
}

Test(C4011, test27, .init=redirect_all_std)
{
    nts::C4011 *component = new nts::C4011("4011");
    nts::OutputComponent *j = new nts::OutputComponent("output");

    component->setLink(11, *j, 1);
    component->setTristatePin(12, nts::TRUE);
    component->setTristatePin(13, nts::TRUE);
    component->run();
    
    cr_assert(j->getTristate() == nts::FALSE);
    delete component;
    delete j;
}