#include "errors/Errors.hpp"

// NTSError class

NTSError::NTSError(const std::string &message, const std::string &component) : _message(message), _component(component)
{
}

NTSError::~NTSError()
{
}

const std::string &NTSError::getComponent() const
{
    return (_component);
}

const char *NTSError::what() const noexcept
{
    return (_message.c_str());
}


// SyntaxError class

SyntaxError::SyntaxError(const std::string &message, const std::string &component) : NTSError(message, component)
{
}

SyntaxError::~SyntaxError()
{
}


// FileError class

FileError::FileError(const std::string &message, const std::string &component) : NTSError(message, component)
{
}

FileError::~FileError()
{
}


// UserError class

UserError::UserError(const std::string &message, const std::string &component) : NTSError(message, component)
{
}

UserError::~UserError()
{
}