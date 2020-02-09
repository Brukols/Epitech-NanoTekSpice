/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/Time.hpp"

nts::TimeComponent::TimeComponent(const std::string &name) : AComponent(name)
{
}

nts::TimeComponent::~TimeComponent()
{
}

void nts::TimeComponent::compute()
{
    if (!_components[0])
        throw UserError("Link missing", "False : compute");
    _tristatePin[0] = !_tristatePin[0];
    _components[0]->setTristatePin(_pair[0].second, _tristatePin[0]);
    _components[0]->compute();
}