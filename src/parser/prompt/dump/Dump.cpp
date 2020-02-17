/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../../../include/parser/Parser.hpp"
#include "../../../../include/errors/Errors.hpp"
#include "../../../../include/components/Utility.hpp"
#include <iostream>
#include <csignal>
#include <cstdlib>
#include <algorithm>

bool sortComponentsMethodName(std::unique_ptr<nts::IComponent> &cmp1, std::unique_ptr<nts::IComponent> &cmp2)
{
    std::string name1 = cmp1->getName();
    std::string name2 = cmp2->getName();
    if (name1.compare(name2) < 0)
        return true;
    return false;
}

void nts::Parser::dump(const std::string &line)
{
    (void)line;
    std::vector<std::unique_ptr<nts::IComponent>> &circuit = _circuit.getCircuit();
    std::sort(circuit.begin(), circuit.end(), sortComponentsMethodName);

    std::cout << std::endl << "**** OUTPUT ****" << std::endl;
    this->displayOutputs(circuit);
    std::cout << std::endl << "**** INPUT ****" << std::endl;
    this->displayInputs(circuit);
    std::cout << std::endl << "**** COMPONENTS ****" << std::endl;
    this->displayComponents(circuit);
    std::cout << std::endl << "**** CLOCKS ****" << std::endl;
    this->displayClock(circuit);
}

void nts::Parser::displayOutputs(std::vector<std::unique_ptr<nts::IComponent>> &circuit)
{
    for_each(circuit.begin(), circuit.end(), [this](const auto& o)
    {
        if (nts::Utility::isOutput(o.get())) {
            auto *oc = static_cast<nts::AComponent *>(o.get());
            std::cout << oc->getName() << std::endl;
            oc->dump();
            std::cout << std::endl;
        }
    });
}

void nts::Parser::displayInputs(std::vector<std::unique_ptr<nts::IComponent>> &circuit)
{
    for_each(circuit.begin(), circuit.end(), [this](const auto& o)
    {
        if (nts::Utility::isInput(o.get())) {
            auto *oc = static_cast<nts::AComponent *>(o.get());
            std::cout << oc->getName() << std::endl;
            oc->dump();
            std::cout << std::endl;
        }
    });
}

void nts::Parser::displayComponents(std::vector<std::unique_ptr<nts::IComponent>> &circuit)
{
    for_each(circuit.begin(), circuit.end(), [this](const auto& o)
    {
        if (!nts::Utility::isInput(o.get()) && !nts::Utility::isOutput(o.get()) && !nts::Utility::isClock(o.get())) {
            auto *oc = static_cast<nts::AComponent *>(o.get());
            std::cout << oc->getName() << std::endl;
            oc->dump();
            std::cout << std::endl;
        }
    });
}

void nts::Parser::displayClock(std::vector<std::unique_ptr<nts::IComponent>> &circuit)
{
    for_each(circuit.begin(), circuit.end(), [this](const auto& o)
    {
        if (nts::Utility::isClock(o.get())) {
            auto *oc = static_cast<nts::AComponent *>(o.get());
            std::cout << oc->getName() << std::endl;
            oc->dump();
            std::cout << std::endl;
        }
    });
}