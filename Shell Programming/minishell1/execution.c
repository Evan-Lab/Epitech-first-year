/*
** EPITECH PROJECT, 2022
** execution.c
** File description:
** desc
*/

#include "my.h"

void execution(char *buffer, char **envp)
{
    char **argv = str_to_word_array(buffer, ' ');

    if (access(argv[0], X_OK) == 0)
        execve(argv[0], argv, envp);
    else
        my_printf("%s: Command not found.\n", argv[0]);
}
