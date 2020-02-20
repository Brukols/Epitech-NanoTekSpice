/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/4071.hpp"
#include "../../include/components/Input.hpp"
#include "../../include/components/Output.hpp"
#include "../../include/components/Utility.hpp"

nts::C4071::C4071(const std::string &name) : AComponent(name, 13)
{
}

nts::C4071::~C4071()
{

}

void nts::C4071::run()
{
    for (size_t i = 0; i < 2; i++) {
        _tristatePin[2] = Utility::orGate(_tristatePin[0], _tristatePin[1]);
        updateOutput();
        _tristatePin[3] = Utility::orGate(_tristatePin[4], _tristatePin[5]);
        updateOutput();
        _tristatePin[9] = Utility::orGate(_tristatePin[7], _tristatePin[8]);
        updateOutput();
        _tristatePin[10] = Utility::orGate(_tristatePin[11], _tristatePin[12]);
        updateOutput();
    }
}