/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4030_HPP
#define OOP_NANOTEKSPICE_2019_4030_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4030 : public AComponent {
        public:
            C4030(const std::string &name);
            ~C4030();

            void run();
    };
}

#endif //OOP_NANOTEKSPICE_2019_4030_HPP