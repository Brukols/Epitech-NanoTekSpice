/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/4069.hpp"
#include "../../include/components/Input.hpp"
#include "../../include/components/Output.hpp"
#include "../../include/components/Utility.hpp"

nts::C4069::C4069(const std::string &name) : AComponent(name, 15)
{
}

nts::C4069::~C4069()
{

}

void nts::C4069::run()
{
    _tristatePin[1] = Utility::notGate(_tristatePin[0]);
    updateOutput();
    _tristatePin[3] = Utility::notGate(_tristatePin[2]);
    updateOutput();
    _tristatePin[5] = Utility::notGate(_tristatePin[4]);
    updateOutput();
    _tristatePin[7] = Utility::notGate(_tristatePin[8]);
    updateOutput();
    _tristatePin[9] = Utility::notGate(_tristatePin[10]);
    updateOutput();
    _tristatePin[11] = Utility::notGate(_tristatePin[12]);
    updateOutput();
    _tristatePin[1] = Utility::notGate(_tristatePin[0]);
    updateOutput();
    _tristatePin[3] = Utility::notGate(_tristatePin[2]);
    updateOutput();
    _tristatePin[5] = Utility::notGate(_tristatePin[4]);
    updateOutput();
    _tristatePin[7] = Utility::notGate(_tristatePin[8]);
    updateOutput();
    _tristatePin[9] = Utility::notGate(_tristatePin[10]);
    updateOutput();
    _tristatePin[11] = Utility::notGate(_tristatePin[12]);
    updateOutput();
}