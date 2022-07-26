##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## desc
##

SRC	=	src/main.c				\
		src/take_tetriminos.c	\
		src/help.c				\
		src/game.c				\
		src/boxing.c			\
		src/open_and_read.c		\
		src/malloc_tetriminos.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	tetris

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) -lcurses -L lib/my/ -lmy
	cp $(NAME) mytetris

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) mytetris
	make -C lib/my fclean

re: fclean all clean
