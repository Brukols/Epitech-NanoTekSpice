/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/Input.hpp"

nts::InputComponent::InputComponent() : AComponent("input")
{
}

nts::InputComponent::~InputComponent()
{
}

void nts::InputComponent::compute()
{
    if (!_component[0])
        throw UserError("Link missing", "False : compute");
    _component[0]->setTristatePin(_pair[0].sc, _tristatePin[0]);
    _component[0]->compute();
}