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
    _components[0] = new OutputComponent("Q12");
    _components[1] = new OutputComponent("Q6");
    _components[2] = new OutputComponent("Q5");
    _components[3] = new OutputComponent("Q7");
    _components[4] = new OutputComponent("Q4");
    _components[5] = new OutputComponent("Q3");
    _components[6] = new OutputComponent("Q2");
    _components[7] = NULL;
    _components[8] = new OutputComponent("Q1");
    _components[9] = new ClockComponent("C");
    _components[10] = new InputComponent("R");
    _components[11] = new OutputComponent("Q9");
    _components[12] = new OutputComponent("Q8");
    _components[13] = new OutputComponent("Q10");
    _components[14] = new OutputComponent("Q11");
    _components[15] = NULL;
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
    if (_tristatePin[10] == UNDEFINED)
        return;

    updateInput();

    if (_tristatePin[9] == UNDEFINED && _tristatePin[10] == TRUE) {
        changeOutputs(FALSE);
        return;
    }

    if (_tristatePin[9] == TRUE && _tristatePin[10] == FALSE && _tristatePin[0] != UNDEFINED) {
        changeOutputs((_tristatePin[0] == TRUE ? FALSE : TRUE));
        return;
    }

    updateOutput();
}