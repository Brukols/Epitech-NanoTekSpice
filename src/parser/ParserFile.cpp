/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/Parser.hpp"
#include "../../include/errors/Errors.hpp"

void nts::Parser::openFile()
{
    _fileStream.open(_filename);
    if (!_fileStream.good())
        throw (FileError("This file doesn't exist", "File"));
}

void nts::Parser::closeFile()
{
    _fileStream.close();
}