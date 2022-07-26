##
## EPITECH PROJECT, 2022
## sokoban
## File description:
## Makefile
##

SRC	=	main.c			\
		help.c			\
		take_map.c		\
		mov.c			\
		find_player.c	\
		boxes.c			\
		get_hole.c		\
		error_handing.c	\
		victory.c		\
		my_color.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	@gcc -o $(NAME) $(OBJ) $(CFLAGS) -lcurses -L lib/ -lmy
	@make clean
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C lib/my
	@rm -f unit_tests*

re: fclean all clean

.PHONY:	fclean all clean re
