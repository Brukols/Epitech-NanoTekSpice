/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_4013_HPP
#define OOP_NANOTEKSPICE_2019_4013_HPP

#include "../AComponent.hpp"
#include "Output.hpp"
#include "Input.hpp"
#include "Clock.hpp"

namespace nts
{
    class C4013 : public AComponent {
        public:
            C4013(const std::string &name);
            ~C4013();

            void run();
        
        private:
            void computeFlipFlop(OutputComponent *q1, OutputComponent *q2, InputComponent *clock, InputComponent *reset, InputComponent *data, InputComponent *set);
    };
}

#endif //OOP_NANOTEKSPICE_2019_4013_HPP
