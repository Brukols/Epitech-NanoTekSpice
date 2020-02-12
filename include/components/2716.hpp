/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_2716_HPP
#define OOP_NANOTEKSPICE_2019_2716_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C2716 : public AComponent {
        public:
            C2716(const std::string &name);
            ~C2716();

            void run();
    };
}

#endif //OOP_NANOTEKSPICE_2019_2716_HPP
