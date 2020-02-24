/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/4008.hpp"
#include "../../include/components/Input.hpp"
#include "../../include/components/Output.hpp"
#include "../../include/components/Utility.hpp"

nts::C4008::C4008(const std::string &name) : AComponent(name, 16)
{
}

nts::C4008::~C4008()
{
}

nts::Tristate nts::C4008::sum(Tristate a, Tristate b, Tristate c) noexcept
{
    Tristate sum = FALSE;

    if (a == UNDEFINED || b == UNDEFINED || c == UNDEFINED)
        return (UNDEFINED);
    _tristatePin[13] = FALSE;
    if (a == TRUE)
        sum = TRUE;
    if (b == TRUE)
        sum = (sum == FALSE ? TRUE : FALSE);
    if (c == TRUE)
        sum = (sum == FALSE ? TRUE : FALSE);
    if ((a == TRUE && b == TRUE) || (a == TRUE && c == TRUE) || (b == TRUE && c == TRUE))
        _tristatePin[13] = TRUE;
    return (sum);
}

void nts::C4008::run()
{
    for (int i = 0; i < 3; i++) {
        _tristatePin[9] = sum(_tristatePin[6], _tristatePin[5], _tristatePin[8]);
        updateOutput();
        _tristatePin[10] = sum(_tristatePin[4], _tristatePin[3], _tristatePin[9]);
        updateOutput();
        _tristatePin[11] = sum(_tristatePin[2], _tristatePin[1], _tristatePin[10]);
        updateOutput();
        _tristatePin[12] = sum(_tristatePin[0], _tristatePin[14], _tristatePin[11]);
        updateOutput();
    }
}