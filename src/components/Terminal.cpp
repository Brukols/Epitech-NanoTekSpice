/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/Terminal.hpp"
#include "../../include/components/Input.hpp"
#include "../../include/components/Output.hpp"
#include "../../include/components/Clock.hpp"
#include "../../include/components/Utility.hpp"
#include <ostream>
#include <iostream>
#include <iomanip>

nts::CTerminal::CTerminal(const std::string &name) : AComponent(name, 14)
{
}

nts::CTerminal::~CTerminal()
{

}

void nts::CTerminal::computeTerminal(size_t q1, size_t q2, size_t clock, size_t reset, size_t data, size_t set)
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
    if (_clockStates[clock] == LOW_TO_HIGH && _tristatePin[data] == TRUE) {
        _tristatePin[q1] = TRUE;
        _tristatePin[q2] = FALSE;
        return;
    }
    if (_clockStates[clock] == LOW_TO_HIGH) {
        _tristatePin[q1] = FALSE;
        _tristatePin[q2] = TRUE;
    }
}

void nts::CTerminal::run()
{
    int c = 0;
    for (size_t i = 0; i < 3; i++) {
        computeTerminal(0, 1, 2, 3, 4, 5);
        updateOutput();
        computeTerminal(12, 11, 10, 9, 8, 7);
        updateOutput();
    }
    if (getTristate(9) == nts::Tristate::TRUE) {
        c |= (getTristate(1) == nts::Tristate::TRUE ? 1 : 0) << 0;
        c |= (getTristate(2) == nts::Tristate::TRUE ? 1 : 0) << 1;
        c |= (getTristate(3) == nts::Tristate::TRUE ? 1 : 0) << 2;
        c |= (getTristate(4) == nts::Tristate::TRUE ? 1 : 0) << 3;
        c |= (getTristate(5) == nts::Tristate::TRUE ? 1 : 0) << 4;
        c |= (getTristate(6) == nts::Tristate::TRUE ? 1 : 0) << 5;
        c |= (getTristate(7) == nts::Tristate::TRUE ? 1 : 0) << 6;
        c |= (getTristate(8) == nts::Tristate::TRUE ? 1 : 0) << 7;
        std::cerr << std::setfill('0') << std::setw(3) << std::hex << c << std::endl;
    }
}