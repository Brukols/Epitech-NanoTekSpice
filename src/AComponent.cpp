/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../include/AComponent.hpp"
#include "../include/components/Utility.hpp"

#include <iostream>

nts::AComponent::AComponent(const std::string &name, size_t nbPin) : _name
(name), _tristatePin(nbPin, Tristate::UNDEFINED), _components(nbPin, NULL), _clockStates(nbPin, INITALIZATION)
{
    for (size_t i = 0; i < nbPin; i++)
        _pair.push_back(std::pair<size_t, size_t>(i + 1, 0));
}


// GETTER AND SETTER

const std::string &nts::AComponent::getName() const
{
    return (_name);
}

void nts::AComponent::setTristatePin(size_t nb, nts::Tristate pin)
{
    for (size_t i = 0; i < _pair.size(); i++) {
        if (_pair[i].first == nb) {
            _tristatePin[i] = pin;
            return;
        }
    }
    throw ComponentError("Invalid number of pins", "setTristatePin");
}

nts::Tristate nts::AComponent::getTristate(size_t pin)
{
    if (pin < 1 || pin > _tristatePin.size())
        throw ComponentError("Invalid pin send", "getTristate");
    return (_tristatePin[pin - 1]);
}


// OVERRIDE

void nts::AComponent::setLink(size_t pin, nts::IComponent &other, size_t otherPin)
// Two input cannot be linked
{
    if (pin < 1 || pin > _pair.size())
        throw ComponentError("Invalid number of pins", "setLink");
    _pair[pin - 1].second = otherPin;
    _components[pin - 1] = &other;
    if (nts::Utility::isOutput(this)) {
        nts::OutputComponent *output = static_cast<nts::OutputComponent *>(this);
        output->setIsLinked(true);
    }
    if (nts::Utility::isOutput(&other)) {
        nts::OutputComponent *output2 = static_cast<nts::OutputComponent *>(&other);
        output2->setIsLinked(true);
    }
}

void nts::AComponent::dump() const
{
    for (size_t i = 0; i < _components.size(); i++) {
        std::string status = (_tristatePin[i] == UNDEFINED ? "undefined" : (_tristatePin[i] == TRUE ? "true" : "false"));

        std::cout << "Pin " << _pair[i].first << " which is " << status << " is linked to " << (!_components[i] ? "no component" : std::string("pin " + std::to_string(_pair[i].second) + " of " + _components[i]->getName())) << std::endl;
    }
}

nts::Tristate nts::AComponent::compute(size_t pin)
// Check if the second is note equal to 0
{
    if (pin < 1 || pin > _pair.size())
        throw ComponentError("Invalid number of pins", "compute");
    if (_components[pin - 1]) {
        _components[pin - 1]->setTristatePin(_pair[pin - 1].second, _tristatePin[pin - 1]);
    }
    return (_tristatePin[pin - 1]);
}

void nts::AComponent::updateInput()
{
    for (size_t i = 0; i < _pair.size(); i++) {
        if (_pair[i].second == 0)
            continue;
        if (Utility::isInput(_components[i])) {
            compute(_pair[i].first);
        }
    }
}

void nts::AComponent::updateOutput()
{
    for (size_t i = 0; i < _pair.size(); i++) {
        if (_pair[i].second == 0)
            continue;
        compute(_pair[i].first);
    }
}

const std::vector<nts::IComponent *> & nts::AComponent::getLinkComponents() const
{
    return _components;
}

const std::vector<std::pair<size_t, size_t>> & nts::AComponent::getLinkPin() const
{
    return _pair;
}

void nts::AComponent::setClockState(size_t pin)
{
    if (getTristate(pin) == FALSE) {
        _clockStates[pin - 1] = LOW_TO_HIGH;
    }
    if (getTristate(pin) == TRUE) {
        _clockStates[pin - 1] = HIGH_TO_LOW;
    }
}

nts::clockState nts::AComponent::getClockState(size_t pin) const
{
    return (_clockStates[pin - 1]);
}

void nts::AComponent::computeClock(size_t pin)
{
    if (_components[pin - 1]) {
        _components[pin - 1]->setClockState(_pair[pin - 1].second);
    }
}