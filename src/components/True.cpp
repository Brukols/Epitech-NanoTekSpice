/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/True.hpp"

nts::TrueComponent::TrueComponent(const std::string &name) : AComponent(name, 1)
{
    _tristatePin[0] = nts::TRUE;
}

nts::TrueComponent::~TrueComponent()
{
}

void nts::TrueComponent::setTristatePin(__attribute__((unused)) size_t num, __attribute__((unused)) nts::Tristate tristate)
{
}