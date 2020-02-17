/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/components/4514.hpp"
#include "../../include/components/Input.hpp"
#include "../../include/components/Output.hpp"
#include "../../include/components/Utility.hpp"
#include <algorithm>

nts::C4514::C4514(const std::string &name) : AComponent(name, 24)
{
}

nts::C4514::~C4514()
{
}

void nts::C4514::changeOutputs(Tristate newState) noexcept
{
    _tristatePin[3] = newState;
    _tristatePin[4] = newState;
    _tristatePin[5] = newState;
    _tristatePin[6] = newState;
    _tristatePin[7] = newState;
    _tristatePin[8] = newState;
    _tristatePin[9] = newState;
    _tristatePin[10] = newState;
    _tristatePin[12] = newState;
    _tristatePin[13] = newState;
    _tristatePin[14] = newState;
    _tristatePin[15] = newState;
    _tristatePin[16] = newState;
    _tristatePin[17] = newState;
    _tristatePin[18] = newState;
    _tristatePin[19] = newState;
}

int nts::C4514::getBinaryNb() const noexcept
{
    std::string nb = "";

    nb += (_tristatePin[21] == TRUE ? "1" : "0");
    nb += (_tristatePin[20] == TRUE ? "1" : "0");
    nb += (_tristatePin[2] == TRUE ? "1" : "0");
    nb += (_tristatePin[1] == TRUE ? "1" : "0");
    return (std::stoi(nb, nullptr, 2));
}

void nts::C4514::computeBinary() noexcept
{
    const int outputs[] = {
        10, 8, 9, 7, 6, 5, 4, 3, 17, 16, 19, 18, 13, 12, 15, 14,
    };

    _tristatePin[outputs[getBinaryNb()]] = TRUE;
}

void nts::C4514::run()
{
    if (_tristatePin[0] != TRUE)
        return;
    if (_tristatePin[22] == TRUE) {
        changeOutputs(FALSE);
        updateOutput();
        return;
    }
    if (_tristatePin[1] == UNDEFINED || _tristatePin[2] == UNDEFINED || _tristatePin[20] == UNDEFINED || _tristatePin[21] == UNDEFINED)
        return;
    changeOutputs(FALSE);
    computeBinary();

    updateOutput();
}