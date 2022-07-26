/*
** EPITECH PROJECT, 2022
** execution.c
** File description:
** desc
*/

#include "mini.h"

void execution(char *buffer, mini_t *all)
{
    char **command = str_to_word_array(buffer, ' ');

    if (all->status == true)
        return;
    all->status = true;
    if (access(command[0], X_OK) == 0)
        execve(command[0], command, all->envp);
    else
        my_printf("%s: Command not found.\n", command[0]);
    free(command);
}
