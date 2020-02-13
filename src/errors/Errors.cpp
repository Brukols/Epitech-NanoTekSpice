/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/errors/Errors.hpp"

// NTSError class

nts::NTSError::NTSError(const std::string &message, const std::string &component) : _message(message), _component(component)
{
}

nts::NTSError::~NTSError()
{
}

const std::string &nts::NTSError::getComponent() const
{
    return (_component);
}

const char *nts::NTSError::what() const noexcept
{
    return (_message.c_str());
}


// SyntaxError class

nts::SyntaxError::SyntaxError(const std::string &message, const std::string &component) : NTSError(message, component)
{
}

nts::SyntaxError::~SyntaxError()
{
}


// FileError class

nts::FileError::FileError(const std::string &message, const std::string &component) : NTSError(message, component)
{
}

nts::FileError::~FileError()
{
}


// UserError class

nts::UserError::UserError(const std::string &message, const std::string &component) : NTSError(message, component)
{
}

nts::UserError::~UserError()
{
}


// ComponentError class

nts::ComponentError::ComponentError(const std::string &message, const std::string &component) : NTSError(message, component)
{
}

nts::ComponentError::~ComponentError()
{
}