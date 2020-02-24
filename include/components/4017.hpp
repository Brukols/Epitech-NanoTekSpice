/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4017_HPP
#define OOP_NANOTEKSPICE_2019_4017_HPP

#include "../AComponent.hpp"

namespace nts
{
    class C4017 : public AComponent {
        public:
            C4017(const std::string &name);
            ~C4017();

            void run() override;
        
        private:
            void resetOutput() noexcept;
            void nextOutput() noexcept;
            void changeOutputs(nts::Tristate) noexcept;
            void simulateCircuit() noexcept;

        private:
            size_t _actualPin;
    };
}

#endif //OOP_NANOTEKSPICE_2019_4017_HPP
