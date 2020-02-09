/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/Time.hpp"

nts::TimeComponent::TimeComponent() : AComponent("time")
{
}

nts::TimeComponent::~TimeComponent()
{
}

void nts::TimeComponent::compute()
{
    if (!_component[0])
        throw UserError("Link missing", "False : compute");
    _tristatePin[0] = !_tristatePin[0];
    _component[0]->setTristatePin(_pair[0].sc, _tristatePin[0]);
    _component[0]->compute();
}