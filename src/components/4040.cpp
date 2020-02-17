/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/4040.hpp"
#include "../../include/components/Input.hpp"
#include "../../include/components/Output.hpp"
#include "../../include/components/Utility.hpp"

nts::C4040::C4040(const std::string &name) : AComponent(name, 16)
{
}

nts::C4040::~C4040()
{

}

void nts::C4040::changeOutputs(Tristate state)
{
    _tristatePin[0] = state;
    _tristatePin[1] = state;
    _tristatePin[2] = state;
    _tristatePin[3] = state;
    _tristatePin[4] = state;
    _tristatePin[5] = state;
    _tristatePin[6] = state;
    _tristatePin[8] = state;
    _tristatePin[11] = state;
    _tristatePin[12] = state;
    _tristatePin[13] = state;
    _tristatePin[14] = state;
}

void nts::C4040::run()
{
    // if reset is undefined
    if (_tristatePin[10] == UNDEFINED) {
        changeOutputs(UNDEFINED);
        updateOutput();
        return;
    }

    updateInput();

    // if reset is true
    if (_tristatePin[10] == TRUE) {
        changeOutputs(FALSE);
        updateOutput();
        return;
    }

    if (_tristatePin[9] == FALSE && _tristatePin[10] == FALSE && _tristatePin[0] != UNDEFINED) {
        changeOutputs((_tristatePin[0] == TRUE ? FALSE : TRUE));
        updateOutput();
        return;
    }

    updateOutput();
}