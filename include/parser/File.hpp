/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_FILE_HPP
#define OOP_NANOTEKSPICE_2019_FILE_HPP

#include <fstream>
#include <string>

namespace nts
{
    class File {
        public:
            File(const std::string &filepath);
            ~File();

            bool getDataLine(std::string &line);

        private:
            const std::string &_filePath;
            std::fstream _fileStream;
    };
}
#endif //OOP_NANOTEKSPICE_2019_FILE_HPP
