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
}

nts::C4013::~C4013()
{

}

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
    for (size_t i = 0; i < 3; i++) {
        computeFlipFlop(0, 1, 2, 3, 4, 5);
        updateOutput();
        computeFlipFlop(12, 11, 10, 9, 8, 7);
        updateOutput();
    }
}