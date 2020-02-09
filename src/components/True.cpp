/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/True.hpp"

nts::TrueComponent::TrueComponent(const std::string &name) : AComponent(name)
{
    _tristatePin[0] = nts::TRUE;
}

nts::TrueComponent::~TrueComponent()
{
}

void nts::TrueComponent::setTristatePin(size_t num, nts::Tristate tristate)
{
    _tristatePin[0] = nts::TRUE;
}

void nts::TrueComponent::compute()
{
    if (!_components[0])
        throw UserError("Link missing", "True : compute");
    _components[0]->setTristatePin(_pair[0].second, nts::TRUE);
    _components[0]->compute();
}