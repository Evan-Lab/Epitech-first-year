##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## desc
##

SRC	=	sources/my_printf.c	\
		sources/my_putstr.c	\
		sources/convert.c	\
		sources/my_putchar.c	\
		sources/my_put_nbr.c	\
		sources/my_strlen.c	\
		sources/my_revstr.c	\
		sources/flags.c		\

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ) $(NAMEC)
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
	@rm -f unit_tests*

re: fclean all clean

.PHONY: re fclean
