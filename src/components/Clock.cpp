/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/Clock.hpp"

nts::ClockComponent::ClockComponent(const std::string &name) : AComponent(name, 1)
{
}

nts::ClockComponent::~ClockComponent()
{
}

nts::Tristate nts::ClockComponent::compute(size_t pin)
{
    if (pin < 1 || pin > _pair.size())
        throw ComponentError("Invalid number of pins", "compute");
    _tristatePin[0] = (_tristatePin[0] == UNDEFINED ? UNDEFINED : (_tristatePin[0] == FALSE ? TRUE : FALSE));
    _components[pin - 1]->setTristatePin(_pair[pin - 1].second, _tristatePin[pin - 1]);
    return (UNDEFINED);
}