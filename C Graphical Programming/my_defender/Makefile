##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## desc
##

SRC	=	main.c					\
		game.c					\
		tower.c					\
		sound.c					\
		scores.c				\
		sprite.c				\
		ennemy.c				\
		button.c				\
		screens.c				\
		get_map.c				\
		my_clock.c				\
		my_strlen.c				\
		animation.c				\
		my_sprites.c			\
		ressources.c			\
		pause_menu.c			\
		move_sprite.c			\
		mouse_effect.c			\
		malloc_struct.c			\
		nb_to_char_star.c		\
		game_interaction.c		\
		get_path_coordinates.c	\

OBJ	=	$(SRC:.c=.o)

CPPFLAGS	=	-I./include

CSFMLFLAGS	=	-lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

CFLAGS	=	-Wall -Wextra

NAME	=	my_defender

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CSFMLFLAGS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all clean

.PHONY: fclean all clean re
