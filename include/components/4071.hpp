/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4071_HPP
#define OOP_NANOTEKSPICE_2019_4071_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4071 : public AComponent {
        public:
            C4071(const std::string &name);
            ~C4071();

            void run();
    };
}

#endif //OOP_NANOTEKSPICE_2019_4071_HPP