##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## ded
##

SRC	=	src/main.c		\
		src/help.c		\
		src/error_handing.c	\
		src/secant_algo.c	\
		src/newton_algo.c	\
		src/bisect_algo.c	\
		src/initialize.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	 =	-Wall -Wextra -lm

NAME	=	105torus

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@make clean

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f unit_tests*

re: fclean all clean
