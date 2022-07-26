##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## desc
##

SRC	=	main.c				\
		my_mem_lander.c		\
		my_strlen.c			\
		initialisation.c	\
		my_scaling.c		\
		my_spriting.c		\
		ressources.c		\
		game_over.c			\
		action.c			\
		player.c			\
		scoreboard.c		\
		parralax.c			\
		game.c				\
		my_parralax.c		\
		collision.c			\
		jumping.c			\
		menu.c				\
		sound.c				\
		my_putchar.c		\
		my_putstr.c			\
		help.c				\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -lcsfml-graphics -lcsfml-audio

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@make clean
clean:
	@rm -f $(OBJ)
	@rm -f *.o

fclean:	clean
	@rm -f $(NAME)

re: fclean all clean
