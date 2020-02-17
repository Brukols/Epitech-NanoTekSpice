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

void nts::Parser::changeValueInput(const std::string &line)
{
    (void)line;
    std::string name = line.substr(0, line.find("="));

    int value = std::stoi(line.substr(line.find("=") + 1));

    if (value < 0 || value > 1 || name.empty()) {
        std::cout << "Change value of an input : \"name=value\" (Value must be 0 or 1)" << std::endl;
        return;
    }

    std::vector<std::unique_ptr<IComponent>> &circuit = _circuit.getCircuit();
    auto const& selectedInputU = std::find_if(circuit.begin(), circuit.end(), [name](std::unique_ptr<IComponent> &o)
    {
        if (nts::Utility::isInput(o.get())) {
            auto *oc = static_cast<nts::AComponent *>(o.get());
            if (oc->getName() == name)
                return true;
        }
        return false;
    });

    if (selectedInputU == circuit.end()) {
        std::cout << "Change value of an input : This input does not exist" << std::endl;
        return;
    }
    auto *selectedInput = selectedInputU->get();
    selectedInput->setTristatePin(1, static_cast<nts::Tristate>(value));
}