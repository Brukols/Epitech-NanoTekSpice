/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4094_HPP
#define OOP_NANOTEKSPICE_2019_4094_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4094 : public AComponent {
        public:
            C4094(const std::string &name);
            ~C4094();

            void run();

        private:
            void changeOutputs(Tristate qn) noexcept;
    };
}

#endif //OOP_NANOTEKSPICE_2019_4094_HPP
