/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/False.hpp"

nts::FalseComponent::FalseComponent(const std::string &name) : AComponent(name)
{
    _tristatePin[0] = nts::FALSE;
}

nts::FalseComponent::~FalseComponent()
{
}

void nts::FalseComponent::setTristatePin(size_t num, nts::Tristate tristate)
{
    _tristatePin[0] = nts::FALSE;
}

void nts::FalseComponent::compute()
{
    if (!_components[0])
        throw UserError("Link missing", "False : compute");
    _components[0]->setTristatePin(_pair[0].second, nts::FALSE);
    _components[0]->compute();
}