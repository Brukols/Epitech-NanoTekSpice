/*
** EPITECH PROJECT, 2020
** Circuit
** File description:
** nanotekspice
*/

#include "../include/Circuit.hpp"
#include "../include/components/Utility.hpp"
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

    if (map.find(type) == map.end())
        throw (nts::FileError("Unknow type component", "File"));

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
    if (selectedComponentU1 == circuit.end() || selectedComponentU2 == circuit.end())
        throw nts::FileError("Try to link component that do not exist", "File");
    auto *selectedComponent1 = static_cast<nts::AComponent*>(selectedComponentU1->get());
    auto *selectedComponent2 = static_cast<nts::AComponent*>(selectedComponentU2->get());
    if (nts::Utility::isOutput(selectedComponent1) && nts::Utility::isOutput(selectedComponent2))
        throw nts::FileError("Try to link two output together", "File");
    if (nts::Utility::isInput(selectedComponent1) && nts::Utility::isInput(selectedComponent2))
        throw nts::FileError("Try to link two input together", "File");
    if (nts::Utility::isOutput(selectedComponent1))
        selectedComponent2->setLink(pinLinked2, *selectedComponent1, pinLinked1);
    else if (nts::Utility::isOutput(selectedComponent1))
        selectedComponent1->setLink(pinLinked1, *selectedComponent2, pinLinked2);
    else if (nts::Utility::isInput(selectedComponent2))
        selectedComponent2->setLink(pinLinked2, *selectedComponent1, pinLinked1);
    //else if (selectedComponent1 == selectedComponent2)
    //    selectedComponent2->setLink(pinLinked2, *selectedComponent1, pinLinked1);
    else
        selectedComponent1->setLink(pinLinked1, *selectedComponent2, pinLinked2);
}

void nts::Circuit::verifCircuit()
{
    std::vector<std::unique_ptr<nts::IComponent>> &circuit = this->getCircuit();
    for_each(circuit.begin(), circuit.end(), [](const auto& o)
    {
        if (nts::Utility::isOutput(o.get())) {
            auto *oc = static_cast<nts::OutputComponent *>(o.get());
            if (!oc->getIsLinked()) {
                throw (nts::ComponentError("One or more output are not linked to anything", "Circuit"));
            }
        }
        if (dynamic_cast<InputComponent *>(o.get())) {
            auto *oc = static_cast<nts::InputComponent *>(o.get());
            if (oc->getTristate() == UNDEFINED) {
                throw (nts::ComponentError("One or more input have undefined value", "Circuit"));
            }
        }
    });
}

void nts::Circuit::updateInput() noexcept
{
    std::for_each(_total.begin(), _total.end(), [](std::unique_ptr<IComponent> &component) {
        if (nts::Utility::isInput(component.get())) {
            component.get()->compute();
        }
    });
}

void nts::Circuit::simulate()
{
    updateInput();
    size_t nb_circuit = 0;

    std::for_each(_total.begin(), _total.end(), [&nb_circuit](std::unique_ptr<IComponent> &component) {
        if (!nts::Utility::isInput(component.get()) && !nts::Utility::isOutput(component.get())) {
            component.get()->run();
            nb_circuit++;
        }
    });
    nb_circuit = (nb_circuit == 0 ? 0 : nb_circuit - 1);
    for (; nb_circuit > 0; nb_circuit--) {
        std::for_each(_total.begin(), _total.end(), [](std::unique_ptr<IComponent> &component) {
            if (!nts::Utility::isInput(component.get()) && !nts::Utility::isOutput(component.get())) {
                component.get()->run();
            }
        });
    }
}