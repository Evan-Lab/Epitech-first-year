##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## desc
##

SRC     =       src/main.c		\
		src/exercice1.c	\
		src/exercice2.c	\
		src/exercice3.c	\

OBJ     =       $(SRC:.c=.o)

CFLAGS  =       -Wall -Wextra -Werror -lm

NAME    =       102architect

all:    $(NAME)

$(NAME):        $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@make clean

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:     fclean all clean
