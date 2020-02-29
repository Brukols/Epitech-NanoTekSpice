/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/4094.hpp"

nts::C4094::C4094(const std::string &name) : AComponent(name, 16)
{
}

nts::C4094::~C4094()
{
}

void nts::C4094::changeOutputs(Tristate qn) noexcept
{
    const int qns[] = {
        4, 5, 6, 7, 14, 13, 12, 11
    };
    for (size_t i = 0; i < 7; i++)
        setTristatePin(qns[i], qn);
}

void nts::C4094::shiftBits() noexcept
{
    const int pin_to_change[] = {
        11, 12, 13, 14, 7, 6, 5
    };

    const int other_pin[] = {
        12, 13, 14, 7, 6, 5, 4
    };

    for (size_t i = 0; i < 7; i++) {
        setTristatePin(pin_to_change[i], getTristate(other_pin[i]));
    }
}

void nts::C4094::simulateCircuit() noexcept
{
    if (getClockState(3) == LOW_TO_HIGH && getTristate(15) == FALSE) {
        changeOutputs(UNDEFINED);
        setTristatePin(9, UNDEFINED);
        setTristatePin(11, UNDEFINED);
        updateOutput();
        return;
    }

    if (getClockState(3) == HIGH_TO_LOW && getTristate(15) == FALSE) {
        changeOutputs(UNDEFINED);
        setTristatePin(10, UNDEFINED);
        updateOutput();
        return;
    }

    if (getClockState(3) == LOW_TO_HIGH && getTristate(15) == TRUE && getTristate(1) == FALSE) {
        setTristatePin(9, getTristate(12));
        setTristatePin(11, getTristate(12));
        updateOutput();
        return;
    }

    if (getClockState(3) == LOW_TO_HIGH && getTristate(15) == TRUE && getTristate(1) == TRUE && getTristate(2) == FALSE) {
        shiftBits();
        setTristatePin(4, FALSE);
        setTristatePin(9, getTristate(12));
        setTristatePin(11, getTristate(12));
        updateOutput();
        return;
    }

    if (getClockState(3) == LOW_TO_HIGH && getTristate(15) == TRUE && getTristate(1) == TRUE && getTristate(2) == TRUE) {
        shiftBits();
        setTristatePin(4, TRUE);
        setTristatePin(9, getTristate(12));
        setTristatePin(11, getTristate(12));
        updateOutput();
        return;
    }

    if (getClockState(3) == HIGH_TO_LOW && getTristate(15) == TRUE && getTristate(1) == TRUE && getTristate(2) == TRUE) {
        setTristatePin(10, getTristate(12));
        updateOutput();
        return;
    }
}

void nts::C4094::run()
{
    if (getClockState(3) == INITALIZATION) {
        changeOutputs(FALSE);
        setTristatePin(10, FALSE);
        setTristatePin(9, FALSE);
        setTristatePin(11, FALSE);
        updateOutput();
        return;
    }
    simulateCircuit();
}