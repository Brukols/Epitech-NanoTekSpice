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
#include "../components/Input.hpp"
#include "File.hpp"

namespace nts
{
    class Parser {
        public:
            Parser(std::vector<std::string> &args);
            ~Parser();

            /* PARSE FUNCTION */
            void cutComment(std::string &line);
            bool isLinkPart(const std::string &line) const;
            bool isChipsetPart(const std::string &line) const;
            void prompt();
        private:
            const std::vector<std::string> &_args;
            File _file;
            //const Circuit &_circuit;

        private:
            static void signalHandler(int signum);
            void displayPrompt() const;
    };
}

#endif //OOP_NANOTEKSPICE_2019_PARSER_HPP
