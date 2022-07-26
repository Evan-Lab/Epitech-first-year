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

TEST	=	-lcriterion --coverage

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all:	$(NAME)

tests_run:
	@gcc -o unit_tests tests/tests_my_printf.c $(SRC) $(TEST)
	@./unit_tests

$(NAME):	$(OBJ)
	@gcc -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@make clean

clean:
	@rm -f $(OBJ) $(NAMEC)
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
	@rm -f unit_tests*

re: fclean all clean

.PHONY: re fclean
