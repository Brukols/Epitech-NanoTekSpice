/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_TERMINAL_HPP
#define OOP_NANOTEKSPICE_2019_TERMINAL_HPP

#include "../AComponent.hpp"
#include "Output.hpp"
#include "Input.hpp"
#include "Clock.hpp"

namespace nts
{
    class CTerminal : public AComponent {
        public:
            CTerminal(const std::string &name);
            ~CTerminal();

            void run() override;
        
        private:
            void computeTerminal(size_t q1, size_t q2, size_t clock, size_t reset, size_t data, size_t set);
    };
}

#endif //OOP_NANOTEKSPICE_2019_TERMINAL_HPP
