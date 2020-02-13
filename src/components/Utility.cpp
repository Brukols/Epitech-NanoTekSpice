/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/Utility.hpp"

bool nts::Utility::isInput(IComponent *component) noexcept
{
    return ((dynamic_cast<InputComponent *>(component) || dynamic_cast<ClockComponent *>(component) || dynamic_cast<TrueComponent *>(component) || dynamic_cast<FalseComponent *>(component) ? true : false));
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

nts::Tristate nts::Utility::andGate(Tristate input1, Tristate input2) noexcept
{
    if (input1 == UNDEFINED && input2 == UNDEFINED)
        return (UNDEFINED);
    if (input1 == TRUE && input2 == TRUE)
        return (TRUE);
    return (FALSE);
}

nts::Tristate nts::Utility::nandGate(Tristate input1, Tristate input2) noexcept
{
    if (input1 == UNDEFINED && input2 == UNDEFINED)
        return (UNDEFINED);
    if (input1 == TRUE && input2 == TRUE)
        return (FALSE);
    return (TRUE);
}

nts::Tristate nts::Utility::orGate(Tristate input1, Tristate input2) noexcept
{
    if (input1 == UNDEFINED && input2 == UNDEFINED)
        return (UNDEFINED);
    if (input1 == TRUE || input2 == TRUE)
        return (TRUE);
    return (FALSE);
}

nts::Tristate nts::Utility::xorGate(Tristate input1, Tristate input2) noexcept
{
    if (input1 == UNDEFINED && input2 == UNDEFINED)
        return (UNDEFINED);
    if ((input1 == TRUE && input2 != TRUE) || (input2 == TRUE && input1 != TRUE))
        return (TRUE);
    return (FALSE);
}

nts::Tristate nts::Utility::norGate(Tristate input1, Tristate input2) noexcept
{
    if (input1 == UNDEFINED && input2 == UNDEFINED)
        return (UNDEFINED);
    if (input1 == FALSE && input2 == FALSE)
        return (TRUE);
    return (FALSE);
}