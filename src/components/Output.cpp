/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/Output.hpp"

nts::OutputComponent::OutputComponent(const std::string &name) : AComponent(name)
{
}

nts::OutputComponent::~OutputComponent()
{
}

void nts::OutputComponent::compute()
{
    if (!_components[0])
        return;
    _components[0]->setTristatePin(_pair[0].second, _tristatePin[0]);
    _components[0]->compute();
}