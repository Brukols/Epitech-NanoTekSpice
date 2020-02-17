/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4081_HPP
#define OOP_NANOTEKSPICE_2019_4081_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4081 : public AComponent {
        public:
            C4081(const std::string &name);
            ~C4081();

            void run() override;
    };
}

#endif //OOP_NANOTEKSPICE_2019_4081_HPP
