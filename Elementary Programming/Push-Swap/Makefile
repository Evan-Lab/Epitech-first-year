##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## ded
##

SRC	=	sources/my_pushswap.c		\
		sources/bubble_sort_array.c	\
		sources/files.c			\
		sources/my_printf.c		\
		sources/swap_pa.c		\
		sources/swap_pb.c		\
		sources/my_algorithm.c		\
		sources/my_put_nbr.c		\
		sources/my_putchar.c		\
		sources/my_putstr.c		\
		sources/swap_ra.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	 =	-Wall -Wextra

NAME	=	push_swap

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@make clean

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f unit_tests*

re: fclean all clean
