/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(C4001, test00, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(3, *output, 1);
    component->setTristatePin(1, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::UNDEFINED);
    delete component;
    delete output;
}

Test(C4001, test01, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(3, *output, 1);
    component->setTristatePin(1, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::UNDEFINED);
    delete component;
    delete output;
}

Test(C4001, test02, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(3, *output, 1);
    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(2, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test03, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(3, *output, 1);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test04, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(3, *output, 1);
    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(2, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test05, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(3, *output, 1);
    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(2, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::TRUE);
    delete component;
    delete output;
}


// INPUT 5 AND 6, OUTPUT 4

Test(C4001, test06, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(4, *output, 1);
    component->setTristatePin(5, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::UNDEFINED);
    delete component;
    delete output;
}

Test(C4001, test07, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(4, *output, 1);
    component->setTristatePin(5, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::UNDEFINED);
    delete component;
    delete output;
}

Test(C4001, test08, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(4, *output, 1);
    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(6, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test09, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(4, *output, 1);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test10, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(4, *output, 1);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test11, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(4, *output, 1);
    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::TRUE);
    delete component;
    delete output;
}


// INPUT 8 AND 9, OUTPUT 10

Test(C4001, test12, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(10, *output, 1);
    component->setTristatePin(8, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::UNDEFINED);
    delete component;
    delete output;
}

Test(C4001, test13, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(10, *output, 1);
    component->setTristatePin(8, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::UNDEFINED);
    delete component;
    delete output;
}

Test(C4001, test14, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(10, *output, 1);
    component->setTristatePin(8, nts::FALSE);
    component->setTristatePin(9, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test15, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(10, *output, 1);
    component->setTristatePin(8, nts::TRUE);
    component->setTristatePin(9, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test16, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(10, *output, 1);
    component->setTristatePin(8, nts::TRUE);
    component->setTristatePin(9, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test17, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(10, *output, 1);
    component->setTristatePin(8, nts::FALSE);
    component->setTristatePin(9, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::TRUE);
    delete component;
    delete output;
}


// INPUT 8 AND 9, OUTPUT 10

Test(C4001, test18, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(11, *output, 1);
    component->setTristatePin(12, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::UNDEFINED);
    delete component;
    delete output;
}

Test(C4001, test19, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(11, *output, 1);
    component->setTristatePin(12, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::UNDEFINED);
    delete component;
    delete output;
}

Test(C4001, test20, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(11, *output, 1);
    component->setTristatePin(12, nts::FALSE);
    component->setTristatePin(13, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test21, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(11, *output, 1);
    component->setTristatePin(12, nts::TRUE);
    component->setTristatePin(13, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test22, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(11, *output, 1);
    component->setTristatePin(12, nts::TRUE);
    component->setTristatePin(13, nts::TRUE);
    component->run();

    cr_assert(output->getTristate() == nts::FALSE);
    delete component;
    delete output;
}

Test(C4001, test23, .init=redirect_all_std)
{
    nts::C4001 *component = new nts::C4001("4001");
    nts::IComponent *output = new nts::OutputComponent("output");

    component->setLink(11, *output, 1);
    component->setTristatePin(12, nts::FALSE);
    component->setTristatePin(13, nts::FALSE);
    component->run();

    cr_assert(output->getTristate() == nts::TRUE);
    delete component;
    delete output;
}