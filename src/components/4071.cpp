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
    _components[0] = new InputComponent("input1");
    _components[1] = new InputComponent("input2");
    _components[2] = new OutputComponent("Output1");
    _components[3] = new OutputComponent("Output2");
    _components[4] = new InputComponent("Input3");
    _components[5] = new InputComponent("Input4");
    _components[6] = nullptr;
    _components[7] = new InputComponent("Input5");
    _components[8] = new InputComponent("Input6");
    _components[9] = new OutputComponent("Output3");
    _components[10] = new OutputComponent("Output4");
    _components[11] = new InputComponent("Input7");
    _components[12] = new InputComponent("Input8");
}

nts::C4071::~C4071()
{

}

void nts::C4071::run()
{
    updateInput();

    _tristatePin[2] = Utility::orGate(_tristatePin[0], _tristatePin[1]);
    _tristatePin[3] = Utility::orGate(_tristatePin[4], _tristatePin[5]);
    _tristatePin[9] = Utility::orGate(_tristatePin[7], _tristatePin[8]);
    _tristatePin[10] = Utility::orGate(_tristatePin[11], _tristatePin[12]);

    updateOutput();
}