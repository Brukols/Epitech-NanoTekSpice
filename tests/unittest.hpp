/*
** EPITECH PROJECT, 2019
** UNIT TEST
** File description:
** header UNIT TEST
*/

#ifndef UNITTEST_H
#define UNITTEST_H

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <criterion/theories.h>
#include <iostream>

#include "../include/Parser.hpp"
#include "../include/nanotekspice.hpp"
#include "../include/errors/Errors.hpp"
#include "../include/interfaces/IComponent.hpp"
#include "../include/components/False.hpp"
#include "../include/components/True.hpp"
#include "../include/components/Input.hpp"
#include "../include/components/Output.hpp"
#include "../include/components/Clock.hpp"

void redirect_all_std(void);

#endif
