/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4801_HPP
#define OOP_NANOTEKSPICE_2019_4801_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4801 : public AComponent {
        public:
            C4801(const std::string &name);
            ~C4801();

            void run() override;
    };
}

#endif //OOP_NANOTEKSPICE_2019_4801_HPP
