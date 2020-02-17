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

bool sortComponentsMethodName(std::unique_ptr<nts::IComponent> &cmp1, std::unique_ptr<nts::IComponent> &cmp2);

void nts::Parser::display(const std::string &line)
{
    (void)line;
    std::vector<std::unique_ptr<nts::IComponent>> &circuit = _circuit.getCircuit();
    std::sort(circuit.begin(), circuit.end(), sortComponentsMethodName);
    for_each(circuit.begin(), circuit.end(), [](const auto& o)
    {
        if (nts::Utility::isOutput(o.get())) {
            auto *oc = static_cast<nts::AComponent *>(o.get());
            std::cout << oc->getName() << "=";
            if (oc->getTristate(1) == -1)
                std::cout << "U" << std::endl;
            else
                std::cout << oc->getTristate(1) << std::endl;
        }
    });
}