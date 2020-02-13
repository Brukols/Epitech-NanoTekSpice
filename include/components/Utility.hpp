/*
** EPITECH PROJECT, 2020
** Utility
** File description:
** nanotekspice
*/

#ifndef UTILITY_HPP
#define UTILITY_HPP

#include "../../include/interfaces/IComponent.hpp"
#include "../../include/components/Input.hpp"
#include "../../include/components/Output.hpp"
#include "../../include/components/Clock.hpp"
#include "../../include/components/True.hpp"
#include "../../include/components/False.hpp"

namespace nts
{
    class Utility {
        public:

            static bool isInput(IComponent *) noexcept;
            static bool isOutput(IComponent *) noexcept;
            static bool isClock(IComponent *) noexcept;
            static bool isTrue(IComponent *) noexcept;
            static bool isFalse(IComponent *) noexcept;

            static Tristate andGate(Tristate input1, Tristate input2) noexcept;
            static Tristate nandGate(Tristate input1, Tristate input2) noexcept;
            static Tristate orGate(Tristate input1, Tristate input2) noexcept;
            static Tristate xorGate(Tristate input1, Tristate input2) noexcept;
            static Tristate norGate(Tristate input1, Tristate input2) noexcept;
            static Tristate notGate(Tristate input1) noexcept;

        protected:
        private:
    };
} // namespace nts

#endif /* !UTILITY_HPP */
