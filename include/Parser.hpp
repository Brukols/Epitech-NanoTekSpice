/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_PARSER_HPP
#define OOP_NANOTEKSPICE_2019_PARSER_HPP

#include <fstream>
#include <string>
#include <vector>

namespace nts {
    class Parser {
        public:
            Parser(int ac, char **av);
            ~Parser();

            /* FILE ONLY FUNCTION */
            void openFile();
            void closeFile();
        private:
            std::vector<std::string> _args;
            const std::string &_filename;
            std::ifstream _fileStream;
    };
}
#endif //OOP_NANOTEKSPICE_2019_PARSER_HPP
