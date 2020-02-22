/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../include/parser/File.hpp"
#include "../../include/errors/Errors.hpp"

nts::File::File(const std::string &filepath) : _filePath(filepath)
{
    _fileStream.open(_filePath, std::ios::in);

    if (!_fileStream.is_open()) {
        _fileStream.clear();
        throw (FileError("This file doesn't exist", "File"));
    }
}

nts::File::~File()
{
    _fileStream.close();
    _fileStream.clear();
}

bool nts::File::getDataLine(std::string &line)
{
    if (std::getline(_fileStream, line))
        return true;
    return false;
}