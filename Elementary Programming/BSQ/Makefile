##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## BSQ
##

SRC	=	src/main.c				\
		src/bsq.c				\
		src/functions.c			\
		src/options.c			\
		src/open_maps.c				\
		lib/my_putstr.c		\
		lib/my_putchar.c	\
		lib/my_strlen.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	bsq

all: $(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@make clean

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(NAME)

re:	fclean all
