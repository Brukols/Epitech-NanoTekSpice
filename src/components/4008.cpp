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
    _components[0] = new InputComponent("A4");
    _components[1] = new InputComponent("B3");
    _components[2] = new InputComponent("A3");
    _components[3] = new InputComponent("B2");
    _components[4] = new InputComponent("A2");
    _components[5] = new InputComponent("B1");
    _components[6] = new InputComponent("A1");
    _components[7] = NULL;
    _components[8] = new InputComponent("C1");
    _components[9] = new OutputComponent("S1");
    _components[10] = new OutputComponent("S2");
    _components[11] = new OutputComponent("S3");
    _components[12] = new OutputComponent("S4");
    _components[13] = new OutputComponent("CO");
    _components[14] = new InputComponent("B4");
    _components[15] = NULL;
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
        sum = (sum == FALSE ? TRUE : FALSE);
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
    _tristatePin[9] = sum(_tristatePin[6], _tristatePin[5], _tristatePin[8]);
    _tristatePin[10] = sum(_tristatePin[4], _tristatePin[3], _tristatePin[9]);
    _tristatePin[11] = sum(_tristatePin[2], _tristatePin[1], _tristatePin[10]);
    _tristatePin[12] = sum(_tristatePin[0], _tristatePin[14], _tristatePin[11]);

    updateOutput();
}