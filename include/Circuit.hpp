/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_CIRCUIT_HPP
#define OOP_NANOTEKSPICE_2019_CIRCUIT_HPP

#include <memory>
#include <map>

#include "interfaces/IComponent.hpp"
#include "components/4001.hpp"
#include "components/4008.hpp"
#include "components/4011.hpp"
#include "components/4013.hpp"
#include "components/4017.hpp"
#include "components/4030.hpp"
#include "components/4040.hpp"
#include "components/4069.hpp"
#include "components/4071.hpp"
#include "components/4081.hpp"
#include "components/4094.hpp"
#include "components/4514.hpp"
#include "components/4801.hpp"
#include "components/2716.hpp"
#include "components/Input.hpp"
#include "components/Output.hpp"
#include "components/True.hpp"
#include "components/False.hpp"
#include "components/Clock.hpp"

namespace nts
{
    class Circuit
    {
        public:
            Circuit();
            ~Circuit();

            std::unique_ptr<IComponent> createComponent(const std::string &type, const std::string &value);

            std::vector<std::unique_ptr<nts::IComponent>> &getCircuit();
            void addCircuit(std::unique_ptr<nts::IComponent> &circuit);

            void setLink(const std::string &linked1, size_t pinLinked1, const std::string &linked2, size_t pinLinked2);
            void verifCircuit();

            void simulate();
        private:
            std::vector<std::unique_ptr<nts::IComponent>> _total;
        private:
            std::unique_ptr<IComponent> create4001(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4008(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4011(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4013(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4017(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4030(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4040(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4069(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4071(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4081(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4094(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4514(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create4801(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> create2716(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> createInput(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> createOutput(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> createClock(const std::string &value)const noexcept;
            std::unique_ptr<IComponent> createTrue(const std::string &value) const noexcept;
            std::unique_ptr<IComponent> createFalse(const std::string &value) const noexcept;

            void updateInput() noexcept;
    };
}

#endif //OOP_NANOTEKSPICE_2019_CIRCUIT_HPP
