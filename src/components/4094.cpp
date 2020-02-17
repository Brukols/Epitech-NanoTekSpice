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

void nts::C4094::run()
{
    updateInput();

    if (getTristate(3) == TRUE && getTristate(15) == FALSE) {
        changeOutputs(UNDEFINED);
        setTristatePin(9, getTristate(12));
        setTristatePin(11, getTristate(12));
        updateOutput();
        return;
    }

    if (getTristate(3) == FALSE && getTristate(15) == FALSE) {
        changeOutputs(UNDEFINED);
        setTristatePin(10, getTristate(12));
        updateOutput();
        return;
    }

    if (getTristate(3) == TRUE && getTristate(15) == TRUE && getTristate(1) == FALSE) {
        setTristatePin(9, getTristate(12));
        setTristatePin(11, getTristate(12));
        updateOutput();
        return;
    }

    if (getTristate(3) == TRUE && getTristate(15) == TRUE && getTristate(1) == TRUE && getTristate(2) == FALSE) {
        changeOutputs(FALSE);
        setTristatePin(9, getTristate(12));
        setTristatePin(11, getTristate(12));
        updateOutput();
        return;
    }

    if (getTristate(3) == TRUE && getTristate(15) == TRUE && getTristate(1) == TRUE && getTristate(2) == TRUE) {
        changeOutputs(TRUE);
        setTristatePin(9, getTristate(12));
        setTristatePin(11, getTristate(12));
        updateOutput();
        return;
    }

    if (getTristate(3) == FALSE && getTristate(15) == TRUE && getTristate(1) == TRUE && getTristate(2) == TRUE) {
        setTristatePin(10, getTristate(12));
        updateOutput();
        return;
    }
}