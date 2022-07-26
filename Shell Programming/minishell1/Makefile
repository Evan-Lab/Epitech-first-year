##
## EPITECH PROJECT, 2022
## minishell1
## File description:
## Makefile
##

SRC	=	main.c						\
		get_info.c					\
		functions.c					\
		execute.c					\
		execution.c					\
		space_and_tabs.c	\
		setenv.c		\
		unsetenv.c	\
		lib/my_strupcase.c	\
		lib/my_putstr.c				\
		lib/my_putchar.c			\
		lib/my_strcmp.c				\
		lib/my_put_nbr.c			\
		lib/my_strncmp.c			\
		lib/my_strlen.c				\
		lib/my_strchr.c				\
		lib/my_substr.c				\
		lib/str_to_word_array.c		\
		lib/my_strdup.c				\
		lib/my_strcpy.c				\
		lib/my_strcat.c				\
		lib/my_strcatm.c			\
		lib/my_arrlen.c				\
		lib/my_strstr.c				\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	mysh

all:	$(NAME)

$(NAME):	$(OBJ)
	@make -C my_printf
	@gcc -o $(NAME) $(OBJ) $(CFLAGS) -L my_printf/ -lmy
	@make clean

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@cd my_printf && make fclean

re: fclean all clean
