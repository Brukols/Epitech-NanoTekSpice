/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/


#ifndef ERROR_HPP
#define ERROR_HPP

#include <string>

namespace nts
{

    // NTSError class

    class NTSError : public std::exception
    {
    private:
        std::string _message;
        std::string _component;
    public:
        NTSError(const std::string &message, const std::string &component = "Unknown");
        ~NTSError();

        const std::string &getComponent() const;
        const char *what() const noexcept override;
    };


    // SyntaxError class

    class SyntaxError : public NTSError
    {
    private:

    public:
        SyntaxError(const std::string &message, const std::string &component = "Unknown");
        ~SyntaxError();
    };


    // FileError class

    class FileError : public NTSError
    {
    private:

    public:
        FileError(const std::string &message, const std::string &component = "Unknown");
        ~FileError();
    };


    // UserError class

    class UserError : public NTSError
    {
    private:

    public:
        UserError(const std::string &message, const std::string &component = "Unknown");
        ~UserError();
    };

}

#endif