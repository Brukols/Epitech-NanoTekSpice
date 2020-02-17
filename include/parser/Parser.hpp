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
#include <map>
#include "../components/Input.hpp"
#include "File.hpp"
#include "../Circuit.hpp"

namespace nts
{
    class Parser {
        public:
            Parser(std::vector<std::string> &args);
            ~Parser();

            /* TYPEDEF */
            typedef void (nts::Parser::*execFunc)(const std::string &);

            /* PROMPT FUNCTION */
            void prompt();
            static void signalHandler(int signum);

        private:
            const std::vector<std::string> &_args;
            File _file;
            std::map<std::string, execFunc> _cmdMap;
            bool _exit;
            static bool _loop;
            Circuit _circuit;

        private:
            void displayPrompt() const;
            void displayOutputs(std::vector<std::unique_ptr<nts::IComponent>> &circuit);
            void displayInputs(std::vector<std::unique_ptr<nts::IComponent>> &circuit);
            void displayComponents(std::vector<std::unique_ptr<nts::IComponent>> &circuit);
            void displayClock(std::vector<std::unique_ptr<nts::IComponent>> &circuit);
            void exit(const std::string &);
            void display(const std::string &);
            void changeValueInput(const std::string &);
            void simulate(const std::string &);
            void loop(const std::string &);
            void dump(const std::string &);
            void cleanCommand(std::string &);
            void loadFile();
            /* PARSE LINE FUNCTION */
            void cutComment(std::string &line);
            bool isLinkPart(const std::string &line) const;
            bool isChipsetPart(const std::string &line) const;

            void parseLineChipset(std::string &line);
            void parseLineLink(std::string &line);
            bool detectPartFile(std::string &line, size_t &section);
            void parseArg();
    };
}

#endif //OOP_NANOTEKSPICE_2019_PARSER_HPP
