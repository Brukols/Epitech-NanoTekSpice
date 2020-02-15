/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "unittest.hpp"

Test(C4013, test00)
{
    nts::C4013 *component = new nts::C4013("4013");
    nts::OutputComponent *q = new nts::OutputComponent("output");
    nts::OutputComponent *_q = new nts::OutputComponent("output");
    nts::ClockComponent *cl = new nts::ClockComponent("clock");
    nts::InputComponent *reset = new nts::InputComponent("reset");
    nts::InputComponent *data = new nts::InputComponent("data");
    nts::InputComponent *set = new nts::InputComponent("set");

    component->setLink(1, *q, 1);
    component->setLink(2, *_q, 1);
    component->setLink(3, *cl, 1);
    component->setLink(4, *reset, 1);
    component->setLink(5, *data, 1);
    component->setLink(6, *set, 1);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);
    component->setTristatePin(5, nts::FALSE);
    component->setTristatePin(6, nts::FALSE);
    component->run();

    cr_assert(q->getTristate() == nts::FALSE);
    cr_assert(_q->getTristate() == nts::TRUE);
    delete component;
    delete q;
    delete _q;
    delete cl;
    delete reset;
    delete data;
    delete set;
}

Test(C4013, test01, .init=redirect_all_std)
{
    nts::C4013 *component = new nts::C4013("4013");
    nts::OutputComponent *q = new nts::OutputComponent("output");
    nts::OutputComponent *_q = new nts::OutputComponent("output");
    nts::ClockComponent *cl = new nts::ClockComponent("clock");
    nts::InputComponent *reset = new nts::InputComponent("reset");
    nts::InputComponent *data = new nts::InputComponent("data");
    nts::InputComponent *set = new nts::InputComponent("set");

    component->setLink(1, *q, 1);
    component->setLink(2, *_q, 1);
    component->setLink(3, *cl, 1);
    component->setLink(4, *reset, 1);
    component->setLink(5, *data, 1);
    component->setLink(6, *set, 1);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::FALSE);
    component->run();

    cr_assert(q->getTristate() == nts::TRUE);
    cr_assert(_q->getTristate() == nts::FALSE);
    delete component;
    delete q;
    delete _q;
    delete cl;
    delete reset;
    delete data;
    delete set;
}

Test(C4013, test02, .init=redirect_all_std)
{
    nts::C4013 *component = new nts::C4013("4013");
    nts::OutputComponent *q = new nts::OutputComponent("output");
    nts::OutputComponent *_q = new nts::OutputComponent("output");
    nts::ClockComponent *cl = new nts::ClockComponent("clock");
    nts::InputComponent *reset = new nts::InputComponent("reset");
    nts::InputComponent *data = new nts::InputComponent("data");
    nts::InputComponent *set = new nts::InputComponent("set");

    component->setLink(1, *q, 1);
    component->setLink(2, *_q, 1);
    component->setLink(3, *cl, 1);
    component->setLink(4, *reset, 1);
    component->setLink(5, *data, 1);
    component->setLink(6, *set, 1);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(4, nts::FALSE);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::FALSE);
    component->run();

    cr_assert(q->getTristate() == nts::UNDEFINED);
    cr_assert(_q->getTristate() == nts::UNDEFINED);
    delete component;
    delete q;
    delete _q;
    delete cl;
    delete reset;
    delete data;
    delete set;
}

Test(C4013, test03, .init=redirect_all_std)
{
    nts::C4013 *component = new nts::C4013("4013");
    nts::OutputComponent *q = new nts::OutputComponent("output");
    nts::OutputComponent *_q = new nts::OutputComponent("output");
    nts::ClockComponent *cl = new nts::ClockComponent("clock");
    nts::InputComponent *reset = new nts::InputComponent("reset");
    nts::InputComponent *data = new nts::InputComponent("data");
    nts::InputComponent *set = new nts::InputComponent("set");

    component->setLink(1, *q, 1);
    component->setLink(2, *_q, 1);
    component->setLink(3, *cl, 1);
    component->setLink(4, *reset, 1);
    component->setLink(5, *data, 1);
    component->setLink(6, *set, 1);
    component->setTristatePin(3, nts::TRUE);
    component->setTristatePin(4, nts::TRUE);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::FALSE);
    component->run();

    cr_assert(q->getTristate() == nts::FALSE);
    cr_assert(_q->getTristate() == nts::TRUE);
    delete component;
    delete q;
    delete _q;
    delete cl;
    delete reset;
    delete data;
    delete set;
}

Test(C4013, test04, .init=redirect_all_std)
{
    nts::C4013 *component = new nts::C4013("4013");
    nts::OutputComponent *q = new nts::OutputComponent("output");
    nts::OutputComponent *_q = new nts::OutputComponent("output");
    nts::ClockComponent *cl = new nts::ClockComponent("clock");
    nts::InputComponent *reset = new nts::InputComponent("reset");
    nts::InputComponent *data = new nts::InputComponent("data");
    nts::InputComponent *set = new nts::InputComponent("set");

    component->setLink(1, *q, 1);
    component->setLink(2, *_q, 1);
    component->setLink(3, *cl, 1);
    component->setLink(4, *reset, 1);
    component->setLink(5, *data, 1);
    component->setLink(6, *set, 1);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(4, nts::FALSE);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);
    component->run();

    cr_assert(q->getTristate() == nts::TRUE);
    cr_assert(_q->getTristate() == nts::FALSE);
    delete component;
    delete q;
    delete _q;
    delete cl;
    delete reset;
    delete data;
    delete set;
}

Test(C4013, test05, .init=redirect_all_std)
{
    nts::C4013 *component = new nts::C4013("4013");
    nts::OutputComponent *q = new nts::OutputComponent("output");
    nts::OutputComponent *_q = new nts::OutputComponent("output");
    nts::ClockComponent *cl = new nts::ClockComponent("clock");
    nts::InputComponent *reset = new nts::InputComponent("reset");
    nts::InputComponent *data = new nts::InputComponent("data");
    nts::InputComponent *set = new nts::InputComponent("set");

    component->setLink(1, *q, 1);
    component->setLink(2, *_q, 1);
    component->setLink(3, *cl, 1);
    component->setLink(4, *reset, 1);
    component->setLink(5, *data, 1);
    component->setLink(6, *set, 1);
    component->setTristatePin(3, nts::FALSE);
    component->setTristatePin(4, nts::TRUE);
    component->setTristatePin(5, nts::TRUE);
    component->setTristatePin(6, nts::TRUE);
    component->run();

    cr_assert(q->getTristate() == nts::TRUE);
    cr_assert(_q->getTristate() == nts::TRUE);
    delete component;
    delete q;
    delete _q;
    delete cl;
    delete reset;
    delete data;
    delete set;
}