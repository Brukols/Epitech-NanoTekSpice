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


std::unique_ptr<nts::IComponent> nts::Circuit::createComponent(const std::string &type, const std::string &value)
{
    std::map<const std::string, std::unique_ptr<nts::IComponent>(nts::Circuit::*)(const std::string &) const> map;

    map["4001"] = &nts::Circuit::create4001;
    map["4008"] = &nts::Circuit::create4008;
    map["4011"] = &nts::Circuit::create4011;
    map["4013"] = &nts::Circuit::create4013;
    map["4017"] = &nts::Circuit::create4017;
    map["4030"] = &nts::Circuit::create4030;
    map["4040"] = &nts::Circuit::create4040;
    map["4069"] = &nts::Circuit::create4069;
    map["4071"] = &nts::Circuit::create4071;
    map["4081"] = &nts::Circuit::create4081;
    map["4094"] = &nts::Circuit::create4094;
    map["4514"] = &nts::Circuit::create4514;
    map["4801"] = &nts::Circuit::create4801;
    map["2716"] = &nts::Circuit::create2716;
    map["input"] = &nts::Circuit::createInput;
    map["output"] = &nts::Circuit::createOutput;
    map["true"] = &nts::Circuit::createTrue;
    map["false"] = &nts::Circuit::createFalse;
    map["time"] = &nts::Circuit::createTime;

    return ((this->*map[type])(value));
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

std::unique_ptr<nts::IComponent> nts::Circuit::createInput(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new InputComponent(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::createOutput(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new OutputComponent(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::createTrue(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new TrueComponent(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::createFalse(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new FalseComponent(value)));
}

std::unique_ptr<nts::IComponent> nts::Circuit::createTime(const std::string &value) const noexcept
{
    return (std::unique_ptr<nts::IComponent>(new TimeComponent(value)));
}