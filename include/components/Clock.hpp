/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_CLOCK_HPP
#define OOP_NANOTEKSPICE_2019_CLOCK_HPP

#include "../interfaces/IComponent.hpp"
#include "../AComponent.hpp"

namespace nts
{
    class ClockComponent : public AComponent {
        public:

            ClockComponent(const std::string &name);
            ~ClockComponent();

            Tristate compute(size_t pin) override;

        private:

    };
}

#endif //OOP_NANOTEKSPICE_2019_CLOCK_HPP
