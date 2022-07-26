##
## EPITECH PROJECT, 2022
## sokoban
## File description:
## Makefile
##

SRC	=	main.c	 \
		my_solver.c	\
		take_map.c	\
		error_handing.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	solver

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	@gcc -o $(NAME) $(OBJ) $(CFLAGS) -L lib/ -lmy

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C lib/my

re: fclean all clean

.PHONY:	fclean all clean re
