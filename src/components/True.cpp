/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/True.hpp"

nts::TrueComponent::TrueComponent() : AComponent("true")
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
    if (!_component[0])
        throw UserError("Link missing", "True : compute");
    _component[0]->setTristatePin(_pair[0].sc, nts::TRUE);
    _component[0]->compute();
}