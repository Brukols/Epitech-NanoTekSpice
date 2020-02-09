/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../include/AComponent.hpp"

#include <iostream>

nts::AComponent::AComponent(const std::string &name) : _name(name)
{
}


// GETTER AND SETTER

const std::string &nts::AComponent::getName() const
{
    return (_name);
}

void nts::AComponent::setTristatePin(size_t nb, nts::Tristate pin)
{
    _tristatePin[nb] = pin;
}


// OVERRIDE

void nts::AComponent::setLink(size_t pin, nts::IComponent &other, size_t otherPin)
{
    _pair.push_back(std::pair<size_t, size_t>(pin, otherPin));
    _components.push_back(&other);
}

void nts::AComponent::dump() const
{
    for (size_t i = 0; i < _components.size(); i++) {
        std::string status = (_pair[i].first == UNDEFINED ? "undefined" : (_pair[i].first == TRUE ? "true" : "false"));

        std::cout << "Pin " << i + 1 << " which is " << status << " is linked to " << (_components[i] ? "no component" : _components[i]->getName()) << std::endl;
    }
}