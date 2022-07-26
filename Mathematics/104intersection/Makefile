##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## desc
##

SRC	=	src/main.c		\
		src/exercice3.c	\
		src/delta.c		\
		src/allput.c	\
		src/my_atoi.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -lm -Werror

NAME	=	104intersection

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@make clean

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re: fclean all clean
