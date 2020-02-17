/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/Output.hpp"

nts::OutputComponent::OutputComponent(const std::string &name) : AComponent(name, 1), _isLinked(false)
{
}

nts::OutputComponent::~OutputComponent()
{
}

void nts::OutputComponent::setIsLinked(bool isLinked)
{
    _isLinked = isLinked;
}

bool nts::OutputComponent::getIsLinked() const
{
    return _isLinked;
}