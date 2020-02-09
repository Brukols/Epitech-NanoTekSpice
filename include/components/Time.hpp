/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_TIME_HPP
#define OOP_NANOTEKSPICE_2019_TIME_HPP

#include "../interfaces/IComponent.hpp"
#include "../AComponent.hpp"

namespace nts
{
    class TimeComponent : public AComponent {
        public:

            TimeComponent(const std::string &name);
            ~TimeComponent();

            void compute();

        private:

    };
}

#endif //OOP_NANOTEKSPICE_2019_TIME_HPP
