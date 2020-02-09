/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_ICOMPONENT_HPP
#define OOP_NANOTEKSPICE_2019_ICOMPONENT_HPP

#include <string>

namespace nts
{
    enum Tristate {
        UNDEFINED = (-true),
        TRUE = true,
        FALSE = false
    };

    class IComponent
    {
    public:
        virtual ~IComponent() = default;

    public:
        virtual nts::Tristate compute(size_t pin = 1) = 0;
        virtual void setLink(size_t pin, nts::IComponent &other, size_t otherPin) = 0;
        virtual void dump() const = 0;

        virtual const std::string &getName() const = 0;
        virtual void setTristatePin(size_t, Tristate) = 0;
    };
}

#endif //OOP_NANOTEKSPICE_2019_ICOMPONENT_HPP
