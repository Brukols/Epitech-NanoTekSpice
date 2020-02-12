/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4069_HPP
#define OOP_NANOTEKSPICE_2019_4069_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4069 : public AComponent {
        public:
            C4069(const std::string &name);
            ~C4069();

            void run();
    };
}

#endif //OOP_NANOTEKSPICE_2019_4069_HPP