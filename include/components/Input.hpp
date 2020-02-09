/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_INPUT_HPP
#define OOP_NANOTEKSPICE_2019_INPUT_HPP

#include "../interfaces/IComponent.hpp"
#include "../AComponent.hpp"

namespace nts
{
    class InputComponent : public AComponent {
        public:

            InputComponent(const std::string &name);
            ~InputComponent();

            void compute();

        private:

    };
}

#endif //OOP_NANOTEKSPICE_2019_INPUT_HPP
