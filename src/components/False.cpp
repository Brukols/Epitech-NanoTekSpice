/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/False.hpp"

nts::FalseComponent::FalseComponent() : AComponent("false")
{
    tristatePin[0] = nts::FALSE;
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
    if (!_component[0])
        throw UserError("Link missing", "False : compute");
    _component[0]->setTristatePin(_pair[0].sc, nts::FALSE);
    _component[0]->compute();
}