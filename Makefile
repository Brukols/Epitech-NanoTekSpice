##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## A simple Makefiled
##

NAME	= nanotekspice

SRC	=	src/nanotekspice.cpp	\
		src/errors/Errors.cpp	\
		src/parser/Parser.cpp	\
		src/parser/ParserFile.cpp	\
		src/parser/ParserLine.cpp	\
		src/components/False.cpp	\
		src/components/Input.cpp	\
		src/components/Output.cpp	\
		src/components/Time.cpp	\
		src/components/True.cpp	\
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

SRC_MAIN	=	src/main.cpp	\

NAME_TESTS	=	unit_test

SRC_TESTS =		$(SRC)	\
				tests/tests_redirect.cpp	\
				tests/tests_cutComment.cpp	\
				tests/tests_isLinkPart.cpp	\
				tests/tests_isChipsetPart.cpp	\

CXXFLAGS += 	-W -Wall -Wextra -Wshadow -Werror -I include\

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

coverage:
	sudo gcovr -e tests/

debug : CXXFLAGS += -g
debug : re

re: fclean all

.PHONY: all clean fclean re tests_run rclean
