/*
** EPITECH PROJECT, 2020
** Circuit
** File description:
** nanotekspice
*/

#include "../include/Circuit.hpp"
#include <algorithm>
#include <ostream>
#include <iostream>

nts::Circuit::Circuit()
{
}

nts::Circuit::~Circuit()
{
}


std::unique_ptr<nts::IComponent> nts::Circuit::createComponent(const std::string &type, const std::string &value)
{
    std::map<const std::string, std::unique_ptr<nts::IComponent>(nts::Circuit::*)(const std::string &) const> map;

    map["4001"] = &nts::Circuit::create4001;
    map["4008"] = &nts::Circuit::create4008;
    map["4011"] = &nts::Circuit::create4011;
    map["4013"] = &nts::Circuit::create4013;
    map["4017"] = &nts::Circuit::create4017;
    map["4030"] = &nts::Circuit::create4030;
    map["4040"] = &nts::Circuit::create4040;
    map["4069"] = &nts::Circuit::create4069;
    map["4071"] = &nts::Circuit::create4071;
    map["4081"] = &nts::Circuit::create4081;
    map["4094"] = &nts::Circuit::create4094;
    map["4514"] = &nts::Circuit::create4514;
    map["4801"] = &nts::Circuit::create4801;
    map["2716"] = &nts::Circuit::create2716;
    map["input"] = &nts::Circuit::createInput;
    map["output"] = &nts::Circuit::createOutput;
    map["true"] = &nts::Circuit::createTrue;
    map["false"] = &nts::Circuit::createFalse;
    map["clock"] = &nts::Circuit::createClock;

    return ((this->*map[type])(value));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4001(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4001(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4008(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4008(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4011(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4011(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4013(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4013(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4017(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4017(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4030(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4030(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4040(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4040(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4069(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4069(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4071(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4071(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4081(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4081(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4094(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4094(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4514(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4514(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4801(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4801(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create2716(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C2716(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::createInput(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new InputComponent(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::createOutput(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new OutputComponent(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::createTrue(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new TrueComponent(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::createFalse(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new FalseComponent(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::createClock(const std::string
&value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new ClockComponent(value)));
}

std::vector<std::unique_ptr<nts::IComponent>> & nts::Circuit::getCircuit()
{
    return _total;
}

void nts::Circuit::addCircuit(std::unique_ptr <IComponent> &circuit)
{
    _total.push_back(std::move(circuit));
}

void nts::Circuit::setLink(const std::string &linked1, size_t pinLinked1, const std::string &linked2, size_t pinLinked2)
{
    std::vector<std::unique_ptr<IComponent>> &circuit = this->getCircuit();
    auto const& selectedComponentU1 = std::find_if(circuit.begin(), circuit.end(), [linked1](std::unique_ptr<IComponent> &o)
    {
        auto *oc = static_cast<nts::AComponent *>(o.get());
        if (oc->getName() == linked1)
            return true;
        return false;
    });

    auto const& selectedComponentU2 = std::find_if(circuit.begin(), circuit.end(), [linked2](std::unique_ptr<IComponent> &o)
    {
        auto *oc = static_cast<nts::AComponent *>(o.get());
        if (oc->getName() == linked2)
            return true;
        return false;
    });
    /* A changer avec throw */
    if (selectedComponentU1 == circuit.end()) {
        std::cout << "Change value of an input : This input does not exist" << std::endl;
        return;
    }
    /* A changer avec throw */
    if (selectedComponentU2 == circuit.end()) {
        std::cout << "Change value of an input : This input does not exist" << std::endl;
        return;
    }
    auto *selectedComponent1 = static_cast<nts::AComponent*>(selectedComponentU1->get());
    auto *selectedComponent2 = static_cast<nts::AComponent*>(selectedComponentU2->get());
    selectedComponent1->setLink(pinLinked1, *selectedComponent2, pinLinked2);
}