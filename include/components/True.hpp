/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_TRUE_HPP
#define OOP_NANOTEKSPICE_2019_TRUE_HPP

#include "../interfaces/IComponent.hpp"
#include "../AComponent.hpp"

namespace nts
{
    class TrueComponent : public AComponent {
        public:

            TrueComponent(const std::string &name);
            ~TrueComponent();

            void setTristatePin(size_t num, nts::Tristate tristate); // In case we want to change the tristate

        private:

    };
}

#endif //OOP_NANOTEKSPICE_2019_TRUE_HPP
