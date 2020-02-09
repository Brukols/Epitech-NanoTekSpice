/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/Input.hpp"

nts::InputComponent::InputComponent(const std::string &name) : AComponent(name)
{
}

nts::InputComponent::~InputComponent()
{
}

void nts::InputComponent::compute()
{
    if (!_components[0])
        throw UserError("Link missing", "Input : compute");
    _components[0]->setTristatePin(_pair[0].second, _tristatePin[0]);
    _components[0]->compute();
}