/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4008_HPP
#define OOP_NANOTEKSPICE_2019_4008_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4008 : public AComponent {
        public:
            C4008(const std::string &name);
            ~C4008();

            void run() override;

        private:
            Tristate sum(Tristate a, Tristate b, Tristate c) noexcept;
    };
}

#endif //OOP_NANOTEKSPICE_2019_4008_HPP
