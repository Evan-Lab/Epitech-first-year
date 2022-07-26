##
## EPITECH PROJECT, 2022
## sokoban
## File description:
## Makefile
##

SRC	=	my_generator.c	\
		main.c		\
		imperfect.c	\
		print_map.c	\
		filling_map.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	generator

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all clean

.PHONY:	fclean all clean re
