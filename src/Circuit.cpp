/*
** EPITECH PROJECT, 2020
** Circuit
** File description:
** nanotekspice
*/

#include "../include/Circuit.hpp"

nts::Circuit::Circuit()
{
}

nts::Circuit::~Circuit()
{
}


std::unique_ptr<nts::IComponent> nts::Circuit::create4001(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4001(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4008(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4008(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4011(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4011(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4013(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4013(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4017(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4017(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4030(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4030(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4040(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4040(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4069(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4069(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4071(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4071(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4081(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4081(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4094(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4094(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4514(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4514(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create4801(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C4801(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::create2716(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new C2716(value)));
}