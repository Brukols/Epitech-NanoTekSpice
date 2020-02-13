/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/Utility.hpp"

bool nts::Utility::isInput(IComponent *component) noexcept
{
    return ((dynamic_cast<InputComponent *>(component) ? true : false));
}

bool nts::Utility::isOutput(IComponent *component) noexcept
{
    return ((dynamic_cast<OutputComponent *>(component) ? true : false));
}

bool nts::Utility::isClock(IComponent *component) noexcept
{
    return ((dynamic_cast<ClockComponent *>(component) ? true : false));
}

bool nts::Utility::isFalse(IComponent *component) noexcept
{
    return ((dynamic_cast<FalseComponent *>(component) ? true : false));
}

bool nts::Utility::isTrue(IComponent *component) noexcept
{
    return ((dynamic_cast<TrueComponent *>(component) ? true : false));
}