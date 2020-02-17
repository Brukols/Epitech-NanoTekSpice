/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/4030.hpp"
#include "../../include/components/Input.hpp"
#include "../../include/components/Output.hpp"
#include "../../include/components/Utility.hpp"

nts::C4030::C4030(const std::string &name) : AComponent(name, 14)
{
}

nts::C4030::~C4030()
{

}

void nts::C4030::run()
{
    updateInput();

    _tristatePin[2] = Utility::xorGate(_tristatePin[0], _tristatePin[1]);
    _tristatePin[3] = Utility::xorGate(_tristatePin[4], _tristatePin[5]);
    _tristatePin[9] = Utility::xorGate(_tristatePin[7], _tristatePin[8]);
    _tristatePin[10] = Utility::xorGate(_tristatePin[11], _tristatePin[12]);

    updateOutput();
}