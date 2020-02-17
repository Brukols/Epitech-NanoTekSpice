/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4011_HPP
#define OOP_NANOTEKSPICE_2019_4011_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4011 : public AComponent {
        public:
            C4011(const std::string &name);
            ~C4011();

            void run() override;
    };
}

#endif //OOP_NANOTEKSPICE_2019_4011_HPP
