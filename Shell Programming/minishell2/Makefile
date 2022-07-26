##
## EPITECH PROJECT, 2022
## minishell2
## File description:
## Makefile
##

SRC	=	main.c						\
		get_info.c					\
		functions.c					\
		minishell_loop.c			\
		execution.c					\
		space_and_tabs.c			\
		setenv.c					\
		unsetenv.c					\
		execute_cd.c				\
		updating.c					\

BUILDDIR = build

OBJ = $(patsubst %.c, $(BUILDDIR)/%.o, $(SRC))

$(BUILDDIR)/%.o: 	src/%.c
	@mkdir -p $(@D)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	mysh

all:	$(NAME)

$(NAME):	$(OBJ)
	@make -C lib/my
	@gcc -o $(NAME) $(OBJ) $(CFLAGS) -L lib/my -lmy

debug_valgrind: CPPFLAGS += -g3
debug_valgrind: re

clean:
	@$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@cd lib/my && make fclean

re: fclean all clean

.PHONY: fclean all clean debug_valgrind
