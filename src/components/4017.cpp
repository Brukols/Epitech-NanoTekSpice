/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/4017.hpp"

nts::C4017::C4017(const std::string &name) : AComponent(name, 15), _actualPin(9)
{
}

nts::C4017::~C4017()
{
}

void nts::C4017::resetOutput() noexcept
{
    _actualPin = 9;
}

void nts::C4017::nextOutput() noexcept
{
    const size_t pins[] {
        3, 2, 4, 7, 10, 1, 5, 6, 9, 11
    };

    changeOutputs(FALSE);
    _actualPin++;
    if (_actualPin == 10)
        _actualPin = 0;
    setTristatePin(pins[_actualPin], TRUE);
    setTristatePin(12, (_actualPin >= 5 ? FALSE : TRUE));
}

void nts::C4017::changeOutputs(Tristate state) noexcept
{
    setTristatePin(3, state);
    setTristatePin(2, state);
    setTristatePin(4, state);
    setTristatePin(7, state);
    setTristatePin(10, state);
    setTristatePin(1, state);
    setTristatePin(5, state);
    setTristatePin(6, state);
    setTristatePin(9, state);
    setTristatePin(11, state);
}

void nts::C4017::run()
{
    // if CP0 (pin 14) is FALSE, the CP1 (pin 13) cannot be TRUE
    if (getTristate(14) == FALSE) {
        setTristatePin(13, FALSE);
    }
    if (getTristate(15) == TRUE)
        resetOutput();
    if (getTristate(13) == TRUE || getTristate(14) == TRUE) {
        nextOutput();
        updateOutput();
        return;
    }
    updateOutput();
}