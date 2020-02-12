/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_CIRCUIT_HPP
#define OOP_NANOTEKSPICE_2019_CIRCUIT_HPP

#include "interfaces/IComponent.hpp"

class Circuit
{
    public:
        Circuit();
        ~Circuit();

        std::unique_ptr<IComponent> createComponent(const std::string &type,
            const std::string &value);
    private:
        //Circuit total
        //list des outputs
        //list des inputs
        //list des components
        //list des times
};

#endif //OOP_NANOTEKSPICE_2019_CIRCUIT_HPP
