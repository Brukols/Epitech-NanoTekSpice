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

#include <iostream>

void nts::C4013::computeFlipFlop(size_t q1, size_t q2, size_t clock, size_t reset, size_t data, size_t set)
{
    if (_tristatePin[set] == TRUE && _tristatePin[reset] == TRUE) {
        _tristatePin[q1] = TRUE;
        _tristatePin[q2] = TRUE;
        return;
    }
    if (_tristatePin[set] == TRUE) {
        _tristatePin[q1] = TRUE;
        _tristatePin[q2] = FALSE;
        return;
    }
    if (_tristatePin[reset] == TRUE) {
        _tristatePin[q1] = FALSE;
        _tristatePin[q2] = TRUE;
        return;
    }
    if (_tristatePin[clock] == TRUE && _tristatePin[data] == TRUE) {
        _tristatePin[q1] = TRUE;
        _tristatePin[q2] = FALSE;
        return;
    }
    if (_tristatePin[clock] == TRUE) {
        _tristatePin[q1] = FALSE;
        _tristatePin[q2] = TRUE;
    }
}

void nts::C4013::run()
{
    updateInput();

    computeFlipFlop(0, 1, 2, 3, 4, 5);
    computeFlipFlop(13, 12, 10, 9, 8, 7);

    updateOutput();
}