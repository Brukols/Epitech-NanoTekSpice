/*
** EPITECH PROJECT, 2020
** OOP_nanotekspice_2019
** File description:
** TODO: add description
*/

#ifndef OOP_NANOTEKSPICE_2019_ACOMPONENT_HPP
#define OOP_NANOTEKSPICE_2019_ACOMPONENT_HPP

#include "interfaces/IComponent.hpp"
#include "errors/Errors.hpp"

#include <vector>
#include <utility>
#include <string>

namespace nts
{
    class AComponent : public IComponent {
        public:

            AComponent(const std::string &name, size_t nbPin);
            virtual ~AComponent() = default;

            // GETTER AND SETTER
            const std::string &getName() const override;
            virtual void setTristatePin(size_t, Tristate) override;

            // OVERRIDE
            void setLink(size_t pin, IComponent &other, size_t otherPin) override;
            void dump() const override;
            virtual nts::Tristate compute(size_t pin = 1) override;

        protected:

            void updateInput(); // call method compute for all inputs
            void updateOutput();

        protected:

            const std::string &_name;
            std::vector <Tristate> _tristatePin;
            std::vector <std::pair<size_t, size_t>> _pair;
            std::vector <IComponent *> _components;
    };
}

#endif //OOP_NANOTEKSPICE_2019_ACOMPONENT_HPP
