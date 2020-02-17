/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4514_HPP
#define OOP_NANOTEKSPICE_2019_4514_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4514 : public AComponent {
        public:
            C4514(const std::string &name);
            ~C4514();

            void run() override;

        private:
            void changeOutputs(Tristate newState) noexcept;
            void computeBinary() noexcept;
            int getBinaryNb() const noexcept;
    };
}

#endif //OOP_NANOTEKSPICE_2019_4514_HPP
