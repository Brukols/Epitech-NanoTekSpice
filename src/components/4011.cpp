/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/4011.hpp"
#include "../../include/components/Input.hpp"
#include "../../include/components/Output.hpp"
#include "../../include/components/Utility.hpp"

nts::C4011::C4011(const std::string &name) : AComponent(name, 14)
{
}

nts::C4011::~C4011()
{
}

void nts::C4011::run()
{ 
    _tristatePin[2] = Utility::nandGate(_tristatePin[0], _tristatePin[1]);
    updateOutput();
    _tristatePin[3] = Utility::nandGate(_tristatePin[4], _tristatePin[5]);
    updateOutput();
    _tristatePin[9] = Utility::nandGate(_tristatePin[7], _tristatePin[8]);
    updateOutput();
    _tristatePin[10] = Utility::nandGate(_tristatePin[11], _tristatePin[12]);
    updateOutput();
    _tristatePin[2] = Utility::nandGate(_tristatePin[0], _tristatePin[1]);
    updateOutput();
    _tristatePin[3] = Utility::nandGate(_tristatePin[4], _tristatePin[5]);
    updateOutput();
    _tristatePin[9] = Utility::nandGate(_tristatePin[7], _tristatePin[8]);
    updateOutput();
    _tristatePin[10] = Utility::nandGate(_tristatePin[11], _tristatePin[12]);
    updateOutput();
}