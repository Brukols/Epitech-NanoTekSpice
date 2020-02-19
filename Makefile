##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## A simple Makefiled
##

NAME	= nanotekspice

SRC	=	src/nanotekspice.cpp	\
		src/errors/Errors.cpp	\
		src/parser/File.cpp	\
		src/parser/Parser.cpp	\
		src/parser/ParserLine.cpp	\
		src/parser/prompt/changeValueInput/ChangeValueInput.cpp	\
		src/parser/prompt/display/Display.cpp	\
		src/parser/prompt/dump/Dump.cpp	\
		src/parser/prompt/exit/Exit.cpp	\
		src/parser/prompt/loop/Loop.cpp	\
		src/parser/prompt/simulate/Simulate.cpp	\
		src/parser/prompt/Prompt.cpp	\
		src/parser/loadFile/loadFile.cpp	\
		src/components/False.cpp	\
		src/components/Input.cpp	\
		src/components/Output.cpp	\
		src/components/Clock.cpp	\
		src/components/True.cpp	\
		src/components/Utility.cpp	\
		src/AComponent.cpp	\
		src/components/2716.cpp	\
		src/components/4001.cpp	\
		src/components/4008.cpp	\
		src/components/4011.cpp	\
		src/components/4013.cpp	\
		src/components/4017.cpp	\
		src/components/4030.cpp	\
		src/components/4040.cpp	\
		src/components/4069.cpp	\
		src/components/4071.cpp	\
		src/components/4081.cpp	\
		src/components/4094.cpp	\
		src/components/4514.cpp	\
		src/components/4801.cpp	\
		src/Circuit.cpp	\

SRC_MAIN	=	src/main.cpp	\

NAME_TESTS	=	unit_test

SRC_TESTS =		$(SRC)	\
				tests/tests_redirect.cpp	\
				tests/tests_setTristatePin.cpp	\
				tests/tests_setLink.cpp	\
				tests/tests_compute.cpp	\
				tests/tests_Utility.cpp	\
				tests/tests_C4001.cpp	\
				tests/tests_C4008.cpp	\
				tests/tests_C4011.cpp	\
				tests/tests_C4013.cpp	\
				tests/tests_C4030.cpp	\
				tests/tests_C4040.cpp	\
				tests/tests_C4069.cpp	\
				tests/tests_C4071.cpp	\
				tests/tests_C4081.cpp	\
				tests/tests_C4514.cpp	\
				tests/tests_C4094.cpp	\
				tests/tests_C4017.cpp	\
				tests/tests_FileClass.cpp	\
				tests/tests_ParserClass.cpp	\
				tests/tests_Dump.cpp	\

CXXFLAGS += 	-W -Wall -Wextra -Wshadow -Werror -I include

LDFLAGS =	\

LDFLAGS_TESTS = -lcriterion --coverage	\

OBJ	=	$(SRC:.cpp=.o) $(SRC_MAIN:.cpp=.o)

OBJ_TESTS =	$(SRC_TESTS:.cpp=.o)

CC	=	g++

all:	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)
clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_TESTS)

fclean: clean
	rm -rf $(NAME)

rclean:
	rm -rf $(NAME_TESTS)
	find . -type f -name "*.gcno" -delete -or -name "*.gcda" -delete

tests_run: CXXFLAGS += -fprofile-arcs -ftest-coverage
tests_run: fclean $(OBJ_TESTS)
	$(CC) -o $(NAME_TESTS) $(OBJ_TESTS) $(LDFLAGS) $(LDFLAGS_TESTS)
	./$(NAME_TESTS)

functional_tests: re
	./tests/functional/tests.sh

coverage:
	sudo gcovr -e tests/

debug : CXXFLAGS += -g
debug : re

re: fclean all

.PHONY: all clean fclean re tests_run rclean functional_tests
