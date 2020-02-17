/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_OUTPUT_HPP
#define OOP_NANOTEKSPICE_2019_OUTPUT_HPP

#include "../interfaces/IComponent.hpp"
#include "../AComponent.hpp"

namespace nts
{
    class OutputComponent : public AComponent {
        public:

            OutputComponent(const std::string &name);
            ~OutputComponent();

            void setIsLinked(bool);

            bool getIsLinked() const;

        private:
            bool _isLinked;
    };
}

#endif //OOP_NANOTEKSPICE_2019_OUTPUT_HPP
