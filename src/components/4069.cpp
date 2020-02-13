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
    _components[0] = new InputComponent("Input1");
    _components[1] = new OutputComponent("Output1");
    _components[2] = new InputComponent("Input2");
    _components[3] = new OutputComponent("Output2");
    _components[4] = new InputComponent("Input3");
    _components[5] = new OutputComponent("Output3");
    _components[6] = NULL;
    _components[7] = new OutputComponent("Output4");
    _components[8] = new InputComponent("Input4");
    _components[9] = new OutputComponent("Output5");
    _components[10] = new InputComponent("Input5");
    _components[11] = new OutputComponent("Output6");
    _components[12] = new InputComponent("Input6");
    _components[13] = NULL;
}

nts::C4069::~C4069()
{

}

void nts::C4069::run()
{
    updateInput();

    _tristatePin[1] = Utility::notGate(_tristatePin[0]);
    _tristatePin[3] = Utility::notGate(_tristatePin[2]);
    _tristatePin[5] = Utility::notGate(_tristatePin[4]);
    _tristatePin[7] = Utility::notGate(_tristatePin[8]);
    _tristatePin[9] = Utility::notGate(_tristatePin[10]);
    _tristatePin[11] = Utility::notGate(_tristatePin[12]);

    updateOutput();
}