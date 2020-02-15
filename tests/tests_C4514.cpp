/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(C4514, test00)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::FALSE);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(21, nts::FALSE);
    component->setTristatePin(22, nts::FALSE);

    component->run();

    cr_assert(component->getTristate(11) == nts::TRUE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test01)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(21, nts::FALSE);
    component->setTristatePin(22, nts::FALSE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::TRUE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test02)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::FALSE);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(21, nts::FALSE);
    component->setTristatePin(22, nts::FALSE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::TRUE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test03)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(21, nts::FALSE);
    component->setTristatePin(22, nts::FALSE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::TRUE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test05)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::FALSE);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(21, nts::TRUE);
    component->setTristatePin(22, nts::FALSE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::TRUE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test06)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(21, nts::TRUE);
    component->setTristatePin(22, nts::FALSE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::TRUE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test07)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::FALSE);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(21, nts::TRUE);
    component->setTristatePin(22, nts::FALSE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::TRUE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test08)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(21, nts::TRUE);
    component->setTristatePin(22, nts::FALSE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::TRUE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test09)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::FALSE);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(21, nts::FALSE);
    component->setTristatePin(22, nts::TRUE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::TRUE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test10)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(21, nts::FALSE);
    component->setTristatePin(22, nts::TRUE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::TRUE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test11)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::FALSE);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(21, nts::FALSE);
    component->setTristatePin(22, nts::TRUE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::TRUE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test12)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(21, nts::FALSE);
    component->setTristatePin(22, nts::TRUE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::TRUE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test13)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::FALSE);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(21, nts::TRUE);
    component->setTristatePin(22, nts::TRUE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::TRUE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test14)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(21, nts::TRUE);
    component->setTristatePin(22, nts::TRUE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::TRUE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test15)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::FALSE);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(21, nts::TRUE);
    component->setTristatePin(22, nts::TRUE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::TRUE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}

Test(C4514, test16)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(21, nts::TRUE);
    component->setTristatePin(22, nts::TRUE);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::TRUE);

    delete component;
}

Test(C4514, test17)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::UNDEFINED);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(21, nts::TRUE);
    component->setTristatePin(22, nts::TRUE);

    component->run();

    cr_assert(component->getTristate(11) == nts::UNDEFINED);
    cr_assert(component->getTristate(9) == nts::UNDEFINED);
    cr_assert(component->getTristate(10) == nts::UNDEFINED);
    cr_assert(component->getTristate(8) == nts::UNDEFINED);
    cr_assert(component->getTristate(7) == nts::UNDEFINED);
    cr_assert(component->getTristate(6) == nts::UNDEFINED);
    cr_assert(component->getTristate(5) == nts::UNDEFINED);
    cr_assert(component->getTristate(4) == nts::UNDEFINED);
    cr_assert(component->getTristate(18) == nts::UNDEFINED);
    cr_assert(component->getTristate(17) == nts::UNDEFINED);
    cr_assert(component->getTristate(20) == nts::UNDEFINED);
    cr_assert(component->getTristate(19) == nts::UNDEFINED);
    cr_assert(component->getTristate(14) == nts::UNDEFINED);
    cr_assert(component->getTristate(13) == nts::UNDEFINED);
    cr_assert(component->getTristate(16) == nts::UNDEFINED);
    cr_assert(component->getTristate(15) == nts::UNDEFINED);

    delete component;
}

Test(C4514, test18)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::FALSE);
    component->setTristatePin(23, nts::FALSE);

    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(21, nts::TRUE);
    component->setTristatePin(22, nts::TRUE);

    component->run();

    cr_assert(component->getTristate(11) == nts::UNDEFINED);
    cr_assert(component->getTristate(9) == nts::UNDEFINED);
    cr_assert(component->getTristate(10) == nts::UNDEFINED);
    cr_assert(component->getTristate(8) == nts::UNDEFINED);
    cr_assert(component->getTristate(7) == nts::UNDEFINED);
    cr_assert(component->getTristate(6) == nts::UNDEFINED);
    cr_assert(component->getTristate(5) == nts::UNDEFINED);
    cr_assert(component->getTristate(4) == nts::UNDEFINED);
    cr_assert(component->getTristate(18) == nts::UNDEFINED);
    cr_assert(component->getTristate(17) == nts::UNDEFINED);
    cr_assert(component->getTristate(20) == nts::UNDEFINED);
    cr_assert(component->getTristate(19) == nts::UNDEFINED);
    cr_assert(component->getTristate(14) == nts::UNDEFINED);
    cr_assert(component->getTristate(13) == nts::UNDEFINED);
    cr_assert(component->getTristate(16) == nts::UNDEFINED);
    cr_assert(component->getTristate(15) == nts::UNDEFINED);

    delete component;
}

Test(C4514, test19)
{
    nts::C4514 *component = new nts::C4514("4514");

    component->setTristatePin(1, nts::TRUE);
    component->setTristatePin(23, nts::TRUE);

    component->setTristatePin(2, nts::TRUE);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(21, nts::TRUE);
    component->setTristatePin(22, nts::UNDEFINED);

    component->run();

    cr_assert(component->getTristate(11) == nts::FALSE);
    cr_assert(component->getTristate(9) == nts::FALSE);
    cr_assert(component->getTristate(10) == nts::FALSE);
    cr_assert(component->getTristate(8) == nts::FALSE);
    cr_assert(component->getTristate(7) == nts::FALSE);
    cr_assert(component->getTristate(6) == nts::FALSE);
    cr_assert(component->getTristate(5) == nts::FALSE);
    cr_assert(component->getTristate(4) == nts::FALSE);
    cr_assert(component->getTristate(18) == nts::FALSE);
    cr_assert(component->getTristate(17) == nts::FALSE);
    cr_assert(component->getTristate(20) == nts::FALSE);
    cr_assert(component->getTristate(19) == nts::FALSE);
    cr_assert(component->getTristate(14) == nts::FALSE);
    cr_assert(component->getTristate(13) == nts::FALSE);
    cr_assert(component->getTristate(16) == nts::FALSE);
    cr_assert(component->getTristate(15) == nts::FALSE);

    delete component;
}