##
## EPITECH PROJECT, 2021
## Makefile my_ls
## File description:
## desc
##

SRC	=	main.c			\
		my_ls_simple.c	\
		files_help.c	\
		my_lsl.c		\
		display.c		\
		lsl.c			\
		flags.c			\
		my_printf/convert.c	\
		my_printf/flags.c	\
		my_printf/my_putchar.c	\
		my_printf/my_put_nbr.c	\
		my_printf/my_strlen.c	\
		my_printf/my_revstr.c	\
		my_printf/my_putstr.c	\
		my_printf/my_printf.c	\

SRCT	=	my_printf/my_printf.c	\
			my_printf/my_putstr.c	\
			my_printf/convert.c		\
			my_printf/my_putchar.c	\
			my_printf/my_put_nbr.c	\
			my_printf/my_strlen.c	\
			my_printf/my_revstr.c	\
			my_printf/flags.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS  =	-Wall -Wextra

CPPFLAGS	=	-I./include

TEST	=	-lcriterion --coverage

NAME	=	 my_ls

all:	$(NAME)

test_run:
		@gcc -o unit_tests tests/tests_my_printf.c $(SRCT) $(TEST)
		@./unit_tests

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@make clean

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f unit_tests*

re: fclean all clean
