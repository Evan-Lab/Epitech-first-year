##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## desc
##

SRC     =       src/101pong.c		\
		src/main.c		\
		src/my_putstr.c		\

OBJ     =       $(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

NAME    =       101pong

all:    $(NAME)

tests_run:
	gcc -o unit_tests tests/tests_101pong.c 101pong.c my_putstr.c -lcriterion --coverage -lm
	./unit_tests
$(NAME):        $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS) -lm
	@make clean
clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@rm -f unit_test*

re: fclean all clean
