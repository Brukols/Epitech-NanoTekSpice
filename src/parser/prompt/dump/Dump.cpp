/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../../../include/parser/Parser.hpp"
#include "../../../../include/errors/Errors.hpp"
#include <iostream>
#include <csignal>
#include <cstdlib>
#include <algorithm>

void nts::Parser::dump(const std::string &line)
{
    (void)line;
    std::cout << std::endl << "**** OUTPUT ****" << std::endl;
    this->displayOutputs();
    std::cout << std::endl << "**** INPUT ****" << std::endl;
    this->displayInputs();
    std::cout << std::endl << "**** COMPONENTS ****" << std::endl;
    this->displayComponents();
    std::cout << std::endl << "**** CLOCKS ****" << std::endl;
    this->displayClock();
}

bool sortComponentsByName(std::unique_ptr<nts::IComponent> &cmp1, std::unique_ptr<nts::IComponent> &cmp2)
{
    std::string name1 = cmp1->getName();
    std::string name2 = cmp2->getName();
    if (name1.compare(name2) < 0)
        return true;
    return false;
}

void nts::Parser::displayOutputs()
{
    std::vector<std::unique_ptr<nts::IComponent>> &components = _circuit.getOutputs();
    std::sort(components.begin(), components.end(), sortComponentsByName);
    for_each(components.begin(), components.end(), [this](const auto& o)
    {
        auto *oc = static_cast<nts::AComponent*>(o.get());
        std::cout << oc->getName() << std::endl;
        oc->dump();
        std::cout << std::endl;
    });
}

void nts::Parser::displayInputs()
{
    std::vector<std::unique_ptr<nts::IComponent>> &components = _circuit.getInputs();
    std::sort(components.begin(), components.end(), sortComponentsByName);
    for_each(components.begin(), components.end(), [this](const auto& o)
    {
        auto *oc = static_cast<nts::AComponent*>(o.get());
        std::cout << oc->getName() << std::endl;
        oc->dump();
        std::cout << std::endl;
    });
}

void nts::Parser::displayComponents()
{
    std::vector<std::unique_ptr<nts::IComponent>> &components = _circuit.getComponents();
    std::sort(components.begin(), components.end(), sortComponentsByName);
    for_each(components.begin(), components.end(), [this](const auto& o)
    {
        auto *oc = static_cast<nts::AComponent*>(o.get());
        std::cout << oc->getName() << std::endl;
        oc->dump();
        std::cout << std::endl;
    });
}

void nts::Parser::displayClock()
{
    std::vector<std::unique_ptr<nts::IComponent>> &components = _circuit.getClocks();
    std::sort(components.begin(), components.end(), sortComponentsByName);
    for_each(components.begin(), components.end(), [this](const auto& o)
    {
        auto *oc = static_cast<nts::AComponent*>(o.get());
        std::cout << oc->getName() << std::endl;
        oc->dump();
        std::cout << std::endl;
    });
}