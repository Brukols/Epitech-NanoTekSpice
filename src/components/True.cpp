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

void nts::TrueComponent::setTristatePin(__attribute__((unused)) size_t num, __attribute__((unused)) nts::Tristate tristate)
{
}

void nts::TrueComponent::compute()
{
    if (!_components[0])
        throw UserError("Link missing", "True : compute");
    _components[0]->setTristatePin(_pair[0].second, nts::TRUE);
    _components[0]->compute();
}