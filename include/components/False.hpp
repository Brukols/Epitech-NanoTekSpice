/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_FALSE_HPP
#define OOP_NANOTEKSPICE_2019_FALSE_HPP

#include "../interfaces/IComponent.hpp"
#include "../AComponent.hpp"
#include "../errors/Errors.hpp"

namespace nts
{
    class FalseComponent : public AComponent {
        public:

            FalseComponent(const std::string &name);
            ~FalseComponent();

            void setTristatePin(size_t num, nts::Tristate tristate) override; // In case we want to change the tristate

        private:

    };
}

#endif //OOP_NANOTEKSPICE_2019_FALSE_HPP
