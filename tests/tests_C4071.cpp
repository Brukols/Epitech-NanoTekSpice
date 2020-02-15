/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(C4071, test00, .init=redirect_all_std)
{
    nts::C4071 *component = new nts::C4071("4071");
    nts::OutputComponent *o1 = new nts::OutputComponent("output");
    nts::OutputComponent *o2 = new nts::OutputComponent("output");
    nts::OutputComponent *o3 = new nts::OutputComponent("output");
    nts::OutputComponent *o4 = new nts::OutputComponent("output");

    component->setLink(3, *o1, 1);
    component->setLink(4, *o2, 1);
    component->setLink(10, *o3, 1);
    component->setLink(11, *o4, 1);
    component->run();
    
    cr_assert(o1->getTristate() == nts::UNDEFINED);
    cr_assert(o2->getTristate() == nts::UNDEFINED);
    cr_assert(o3->getTristate() == nts::UNDEFINED);
    cr_assert(o4->getTristate() == nts::UNDEFINED);
    delete component;
    delete o1;
}

Test(C4071, test01)
{
    nts::C4071 *component = new nts::C4071("4071");
    nts::OutputComponent *o1 = new nts::OutputComponent("output");
    nts::OutputComponent *o2 = new nts::OutputComponent("output");
    nts::OutputComponent *o3 = new nts::OutputComponent("output");
    nts::OutputComponent *o4 = new nts::OutputComponent("output");

    component->setLink(3, *o1, 1);
    component->setLink(4, *o2, 1);
    component->setLink(10, *o3, 1);
    component->setLink(11, *o4, 1);

    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(8, nts::FALSE);
    component->setTristatePin(12, nts::FALSE);
    component->run();
    
    cr_assert(o1->getTristate() == nts::UNDEFINED);
    cr_assert(o2->getTristate() == nts::UNDEFINED);
    cr_assert(o3->getTristate() == nts::UNDEFINED);
    cr_assert(o4->getTristate() == nts::UNDEFINED);
    delete component;
    delete o1;
}

Test(C4071, test02, .init=redirect_all_std)
{
    nts::C4071 *component = new nts::C4071("4071");
    nts::OutputComponent *o1 = new nts::OutputComponent("output");
    nts::OutputComponent *o2 = new nts::OutputComponent("output");
    nts::OutputComponent *o3 = new nts::OutputComponent("output");
    nts::OutputComponent *o4 = new nts::OutputComponent("output");

    component->setLink(3, *o1, 1);
    component->setLink(4, *o2, 1);
    component->setLink(10, *o3, 1);
    component->setLink(11, *o4, 1);

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(8, nts::TRUE);
    component->setTristatePin(12, nts::TRUE);
    component->run();
    
    cr_assert(o1->getTristate() == nts::TRUE);
    cr_assert(o2->getTristate() == nts::TRUE);
    cr_assert(o3->getTristate() == nts::TRUE);
    cr_assert(o4->getTristate() == nts::TRUE);
    delete component;
    delete o1;
}

Test(C4071, test03, .init=redirect_all_std)
{
    nts::C4071 *component = new nts::C4071("4071");
    nts::OutputComponent *o1 = new nts::OutputComponent("output");
    nts::OutputComponent *o2 = new nts::OutputComponent("output");
    nts::OutputComponent *o3 = new nts::OutputComponent("output");
    nts::OutputComponent *o4 = new nts::OutputComponent("output");

    component->setLink(3, *o1, 1);
    component->setLink(4, *o2, 1);
    component->setLink(10, *o3, 1);
    component->setLink(11, *o4, 1);

    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(6, nts::TRUE);
    component->setTristatePin(8, nts::FALSE);
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(12, nts::FALSE);
    component->setTristatePin(13, nts::TRUE);
    component->run();
    
    cr_assert(o1->getTristate() == nts::TRUE);
    cr_assert(o2->getTristate() == nts::TRUE);
    cr_assert(o3->getTristate() == nts::TRUE);
    cr_assert(o4->getTristate() == nts::TRUE);
    delete component;
    delete o1;
}

Test(C4071, test04, .init=redirect_all_std)
{
    nts::C4071 *component = new nts::C4071("4071");
    nts::OutputComponent *o1 = new nts::OutputComponent("output");
    nts::OutputComponent *o2 = new nts::OutputComponent("output");
    nts::OutputComponent *o3 = new nts::OutputComponent("output");
    nts::OutputComponent *o4 = new nts::OutputComponent("output");

    component->setLink(3, *o1, 1);
    component->setLink(4, *o2, 1);
    component->setLink(10, *o3, 1);
    component->setLink(11, *o4, 1);

    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(2, nts::FALSE);
    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);
    component->setTristatePin(8, nts::FALSE);
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(12, nts::FALSE);
    component->setTristatePin(13, nts::FALSE);
    component->run();
    
    cr_assert(o1->getTristate() == nts::FALSE);
    cr_assert(o2->getTristate() == nts::FALSE);
    cr_assert(o3->getTristate() == nts::FALSE);
    cr_assert(o4->getTristate() == nts::FALSE);
    delete component;
    delete o1;
}

Test(C4071, test05, .init=redirect_all_std)
{
    nts::C4071 *component = new nts::C4071("4071");
    nts::OutputComponent *o1 = new nts::OutputComponent("output");
    nts::OutputComponent *o2 = new nts::OutputComponent("output");
    nts::OutputComponent *o3 = new nts::OutputComponent("output");
    nts::OutputComponent *o4 = new nts::OutputComponent("output");

    component->setLink(3, *o1, 1);
    component->setLink(4, *o2, 1);
    component->setLink(10, *o3, 1);
    component->setLink(11, *o4, 1);

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::FALSE);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::FALSE);
    component->setTristatePin(8, nts::TRUE);
    component->setTristatePin(9, nts::FALSE);
    component->setTristatePin(12, nts::TRUE);
    component->setTristatePin(13, nts::FALSE);
    component->run();
    
    cr_assert(o1->getTristate() == nts::TRUE);
    cr_assert(o2->getTristate() == nts::TRUE);
    cr_assert(o3->getTristate() == nts::TRUE);
    cr_assert(o4->getTristate() == nts::TRUE);
    delete component;
    delete o1;
}

Test(C4071, test06, .init=redirect_all_std)
{
    nts::C4071 *component = new nts::C4071("4071");
    nts::OutputComponent *o1 = new nts::OutputComponent("output");
    nts::OutputComponent *o2 = new nts::OutputComponent("output");
    nts::OutputComponent *o3 = new nts::OutputComponent("output");
    nts::OutputComponent *o4 = new nts::OutputComponent("output");

    component->setLink(3, *o1, 1);
    component->setLink(4, *o2, 1);
    component->setLink(10, *o3, 1);
    component->setLink(11, *o4, 1);

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);
    component->setTristatePin(8, nts::TRUE);
    component->setTristatePin(9, nts::TRUE);
    component->setTristatePin(12, nts::TRUE);
    component->setTristatePin(13, nts::TRUE);
    component->run();
    
    cr_assert(o1->getTristate() == nts::TRUE);
    cr_assert(o2->getTristate() == nts::TRUE);
    cr_assert(o3->getTristate() == nts::TRUE);
    cr_assert(o4->getTristate() == nts::TRUE);
    delete component;
    delete o1;
}


