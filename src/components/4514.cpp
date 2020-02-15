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
    _components[0] = new InputComponent("STROBE");
    _components[1] = new InputComponent("IN A");
    _components[2] = new InputComponent("IN B");
    _components[3] = new OutputComponent("S7");
    _components[4] = new OutputComponent("S6");
    _components[5] = new OutputComponent("S5");
    _components[6] = new OutputComponent("S4");
    _components[7] = new OutputComponent("S3");
    _components[8] = new OutputComponent("S1");
    _components[9] = new OutputComponent("S2");
    _components[10] = new OutputComponent("S0");
    _components[11] = NULL;
    _components[12] = new OutputComponent("S13");
    _components[13] = new OutputComponent("S12");
    _components[14] = new OutputComponent("S15");
    _components[15] = new OutputComponent("S14");
    _components[16] = new OutputComponent("S9");
    _components[17] = new OutputComponent("S8");
    _components[18] = new OutputComponent("S11");
    _components[19] = new OutputComponent("S10");
    _components[20] = new InputComponent("IN C");
    _components[21] = new InputComponent("IN D");
    _components[22] = new InputComponent("INHIBIT");
    _components[23] = NULL;
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
    int nb = getBinaryNb();
    const std::string names[] = {
        "S0", "S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "S10", "S11", "S12", "S13", "S14", "S15",
    };
    int i = 0;
    for (; i < 15; i++) {
        if (i == nb)
            break;
    }
    for (size_t it = 0; it < _components.size(); it++) {
        if (_components[it]->getName() != names[i])
            continue;
        _tristatePin[it] = TRUE;
        return;
    }
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