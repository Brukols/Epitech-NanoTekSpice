/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../include/AComponent.hpp"

#include <iostream>

nts::AComponent::AComponent(const std::string &name, size_t nbPin) : _name
(name), _tristatePin(nbPin, Tristate::UNDEFINED)
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
        std::string status = (_tristatePin[i] == UNDEFINED ? "undefined" : (_tristatePin[i] == TRUE ? "true" : "false"));

        std::cout << "Pin " << _pair[i].first << " which is " << status << " is linked to " << (_components[i] ? "no component" : std::string(std::to_string(_pair[i].first) + _components[i]->getName())) << std::endl;
    }
}

nts::Tristate nts::AComponent::compute(size_t pin)
{
    if (pin < 1) {
        // Throw an execption
        return (UNDEFINED);
    }
    for (size_t i = 0; i < _pair.size(); i++) {
        if (_pair[i].first == pin) {
            _components[i]->setTristatePin(_pair[i].second, _tristatePin[i]);
            return (_tristatePin[i]);
        }
    }
    return (UNDEFINED);
}