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

bool sortComponentsByName(std::unique_ptr<nts::IComponent> &cmp1, std::unique_ptr<nts::IComponent> &cmp2);

void nts::Parser::display(const std::string &line)
{
    std::vector<std::unique_ptr<nts::IComponent>> &outputs = _circuit.getOutputs();
    std::sort(outputs.begin(), outputs.end(), sortComponentsByName);
    for_each(outputs.begin(), outputs.end(), [](const auto& o)
    {
        auto *oc = static_cast<nts::OutputComponent*>(o.get());
        std::cout << oc->getName() << "=";
        if (oc->getTristate(1) == -1)
            std::cout << "U" << std::endl;
        else
            std::cout << oc->getTristate(1) << std::endl;
    });
    (void)line;
}