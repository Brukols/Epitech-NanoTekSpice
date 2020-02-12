/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/False.hpp"

nts::FalseComponent::FalseComponent(const std::string &name) : AComponent(name, 1)
{
    _tristatePin[0] = nts::FALSE;
}

nts::FalseComponent::~FalseComponent()
{
}

void nts::FalseComponent::setTristatePin(size_t num, nts::Tristate tristate)
{
    (void)num;
    (void)tristate;
    _tristatePin[0] = nts::FALSE;
}
