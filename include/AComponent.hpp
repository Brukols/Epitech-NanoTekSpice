/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_ACOMPONENT_HPP
#define OOP_NANOTEKSPICE_2019_ACOMPONENT_HPP

#include "interfaces/IComponent.hpp"

namespace nts
{
    class AComponent : public IComponent {
        public:
            AComponent(const std::string &name);

            ~AComponent();

        private:
            const std::string &_name;
            std::vector <enum Tristate> _tristatePin;
            std::vector <pair<int, int>> _pair;
            std::vector <IComponent*> _components;
    };
}

#endif //OOP_NANOTEKSPICE_2019_ACOMPONENT_HPP
