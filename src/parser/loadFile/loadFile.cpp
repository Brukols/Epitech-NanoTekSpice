/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#include "../../../include/parser/Parser.hpp"
#include <iostream>

void nts::Parser::loadFile()
{
    std::string line;
    size_t section = 0;
    while (_file.getDataLine(line)) {

        this->cutComment(line);

        if (line.empty())
            continue;

        try {
            this->detectPartFile(line, section);
        } catch (nts::NTSError const &e) {
            throw e;
        }
        if (section == 1)
            this->parseLineChipset(line);
        else
            this->parseLineLink(line);

        std::cout << line << std::endl;
    }
}

void nts::Parser::detectPartFile(std::string &line, size_t &section)
{
    if (line.find(".chipsets:") != std::string::npos) {
        if (section != 0)
            throw (FileError("Chipset Section already declared", "File"));
        else
            section = 1;
    } else if (line.find(".links:") != std::string::npos) {
        if (section != 1)
            throw (FileError("No Chipset Section", "File"));
        else
            section = 2;
    } else if (section == 0) {
        throw (FileError("No Chipset Section found", "File"));
    }
}

void nts::Parser::parseLineLink(std::string &line)
{
    (void)line;
}

void nts::Parser::parseLineChipset(std::string &line)
{
    (void)line;
}