##
## EPITECH PROJECT, 2021
## Makefile-lib
## File description:
## desc
##

SRC	=	my_putchar.c				\
		my_putstr.c					\
		my_put_nbr.c				\
		my_atoi.c					\
		my_revstr.c					\
		my_strlen.c					\
		my_getnbr.c					\
		my_strcpy.c					\
		my_strcat.c					\
		my_strncat.c				\
		my_strcmp.c					\
		my_strdup.c					\
		my_strncpy.c				\
		str_to_word_array.c			\
		my_printf.c					\
		convert.c					\
		flags.c						\
		my_arrlen.c					\
		my_strstr.c					\
		my_strncmp.c				\
		my_strchr.c					\
		my_strncmp.c				\
		my_strcatm.c				\
		my_strcut.c					\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -c $(SRC) $(CFLAGS)
	@ar rc $(NAME) $(OBJ)
	@cp $(NAME) ../
	@mkdir -p ../../include
	@cp my.h ../../include

clean:
	@$(RM) $(OBJ)

fclean:	clean
	@$(RM) ../$(NAME)
	@$(RM) $(NAME)

re: fclean all clean

.PHONY: fclean all clean
