/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/4081.hpp"
#include "../../include/components/Input.hpp"
#include "../../include/components/Output.hpp"
#include "../../include/components/Utility.hpp"

nts::C4081::C4081(const std::string &name) : AComponent(name, 14)
{
}

nts::C4081::~C4081()
{

}

void nts::C4081::run()
{
    updateInput();

    _tristatePin[2] = Utility::andGate(_tristatePin[0], _tristatePin[1]);
    _tristatePin[3] = Utility::andGate(_tristatePin[4], _tristatePin[5]);
    _tristatePin[9] = Utility::andGate(_tristatePin[7], _tristatePin[8]);
    _tristatePin[10] = Utility::andGate(_tristatePin[11], _tristatePin[12]);

    updateOutput();
}