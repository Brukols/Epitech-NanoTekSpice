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
            Parser(std::vector<std::string> &args);
            ~Parser();

            /* FILE ONLY FUNCTION */
            void openFile();
            void closeFile();

            /* PARSE FUNCTION */
            void cutComment(std::string &line);
            bool isLinkPart(const std::string &line) const;
            bool isChipsetPart(const std::string &line) const;
        private:
            const std::vector<std::string> &_args;
            const std::string &_filename;
            std::ifstream _fileStream;
            //const Circuit &_circuit;
    };
}
#endif //OOP_NANOTEKSPICE_2019_PARSER_HPP
