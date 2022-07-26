##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## desc
##

SRC	=	src/main.c		\
		src/my_putstr.c	\
		src/my_compute_square_root.c	\
		src/key_matrix.c	\
		src/help.c		\
		src/my_strlen.c	\
		src/message_key.c	\
		src/calc_matrix.c	\

SRCT	=	src/action.c		\
		src/my_putstr.c	\
		src/my_compute_square_root.c	\
		src/key_matrix.c	\
		src/help.c		\
		src/my_strlen.c	\
		src/message_key.c	\
		src/calc_matrix.c	\


OBJ	=	$(SRC:.c=.o)

NAME	=	103cipher

CFLAGS	=	-Wall -Wextra

all: $(NAME)

tests_run:
	@gcc -o unit_tests tests/tests.c tests/103tests.c $(SRCT) -lcriterion --coverage
	@./unit_tests

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@make clean

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f unit_tests*

re: fclean all clean
