/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4001_HPP
#define OOP_NANOTEKSPICE_2019_4001_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4001 : public AComponent {
        public:
            C4001(const std::string &name);
            ~C4001();

            void run();
    };
}

#endif //OOP_NANOTEKSPICE_2019_4001_HPP
