##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## desc
##

SRC1	=	sources/my_screensaver.c	\
		sources/open.c			\
		sources/files.c		\
		sources/help.c			\
		sources/stars.c		\

SRC2	=	sources/my_screensaver_two.c	\
		sources/open_second.c		\
		sources/files.c		\
		sources/help.c			\
		sources/draw_lines.c		\
		sources/my_screensaver_three.c	\

OBJ1	=	$(SRC1:.c=.o)

OBJ2	=	$(SRC2:.c=.o)

NAME1	=	my_screensaver

NAME2	=	my_screensaver2

CFLAGS	=	-Wall -Wextra

all:	$(OBJ)
	@gcc -o $(NAME1) $(SRC1) $(CFLAGS) -lcsfml-graphics
	@gcc -o $(NAME2) $(SRC2) $(CFLAGS) -lcsfml-graphics

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME1)
	@rm -f $(NAME2)

re: fclean all clean
