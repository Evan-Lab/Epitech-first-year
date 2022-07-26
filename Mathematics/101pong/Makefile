##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## desc
##

SRC     =       src/101pong.c		\
		src/main.c			\
		src/my_putstr.c		\

OBJ     =       $(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

NAME    =       101pong

all:    $(NAME)

$(NAME):        $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS) -lm
	@make clean
clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@rm -f unit_test*

re: fclean all clean
