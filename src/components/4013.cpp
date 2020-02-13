/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/4013.hpp"
#include "../../include/components/Input.hpp"
#include "../../include/components/Output.hpp"
#include "../../include/components/Clock.hpp"
#include "../../include/components/Utility.hpp"

nts::C4013::C4013(const std::string &name) : AComponent(name, 14)
{
    _components[0] = new OutputComponent("Q1");
    _components[1] = new OutputComponent("!Q1");
    _components[2] = new ClockComponent("CLOCk1");
    _components[3] = new InputComponent("RESET1");
    _components[4] = new InputComponent("DATA1");
    _components[5] = new InputComponent("SET1");
    _components[6] = NULL;
    _components[7] = new InputComponent("SET2");
    _components[8] = new InputComponent("DATA2");
    _components[9] = new InputComponent("RESET2");
    _components[10] = new ClockComponent("CLOCK2");
    _components[11] = new OutputComponent("!Q2");
    _components[12] = new OutputComponent("Q2");
    _components[13] = NULL;
}

nts::C4013::~C4013()
{

}

void nts::C4013::computeFlipFlop(OutputComponent *q1, OutputComponent *q2, InputComponent *clock, InputComponent *reset, InputComponent *data, InputComponent *set)
{
    if (set->getTristate() == TRUE && reset->getTristate() == TRUE) {
        q1->setTristatePin(1, TRUE);
        q2->setTristatePin(1, TRUE);
        return;
    }
    if (set->getTristate() == TRUE) {
        q1->setTristatePin(1, TRUE);
        q2->setTristatePin(1, FALSE);
        return;
    }
    if (reset->getTristate() == TRUE) {
        q1->setTristatePin(1, FALSE);
        q1->setTristatePin(1, TRUE);
        return;
    }
    if (clock->getTristate() == TRUE && data->getTristate() == TRUE) {
        q1->setTristatePin(1, TRUE);
        q2->setTristatePin(1, FALSE);
        return;
    }
    if (clock->getTristate() == TRUE) {
        q1->setTristatePin(1, FALSE);
        q2->setTristatePin(1, TRUE);
    }
}

void nts::C4013::run()
{
    updateInput();

    computeFlipFlop(
        dynamic_cast<OutputComponent *>(_components[0]),
        dynamic_cast<OutputComponent *>(_components[1]),
        dynamic_cast<InputComponent *>(_components[2]),
        dynamic_cast<InputComponent *>(_components[3]),
        dynamic_cast<InputComponent *>(_components[4]),
        dynamic_cast<InputComponent *>(_components[5])
    );
    computeFlipFlop(
        dynamic_cast<OutputComponent *>(_components[13]),
        dynamic_cast<OutputComponent *>(_components[12]),
        dynamic_cast<InputComponent *>(_components[10]),
        dynamic_cast<InputComponent *>(_components[9]),
        dynamic_cast<InputComponent *>(_components[8]),
        dynamic_cast<InputComponent *>(_components[7])
    );

    updateOutput();
}