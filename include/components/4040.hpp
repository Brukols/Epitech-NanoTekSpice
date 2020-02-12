/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4040_HPP
#define OOP_NANOTEKSPICE_2019_4040_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4040 : public AComponent {
        public:
            C4040(const std::string &name);
            ~C4040();

            void run();
    };
}

#endif //OOP_NANOTEKSPICE_2019_4040_HPP