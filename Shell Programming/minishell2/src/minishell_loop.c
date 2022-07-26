/*
** EPITECH PROJECT, 2022
** minishell.c
** File description:
** desc
*/

#include "mini.h"

static char *last_charact(char *buffer)
{
    int i = 0;
    char *last_charcater = malloc(sizeof(char) * my_strlen(buffer));

    for (; buffer[i] != '\n'; i++)
        last_charcater[i] = buffer[i];
    last_charcater[i] = '\0';
    return last_charcater;
}

void my_executable(mini_t *all, char *buffer)
{
    end_program(buffer);
    execute_cd(all, buffer);
    if (fork() == 0) {
        if (my_strncmp("./", buffer, 2) == 0 ||
            my_strncmp("/", buffer, 1) == 0) {
            execution(buffer, all);
            return;
        } else
            execute_path(buffer, all);
        return;
    } else
        wait(all->wstatus);
}

void my_loop(mini_t *all)
{
    char *buffer = NULL;
    size_t len = 0;
    all->status = false;

    while (1) {
        info_buffer(all);
        if (getline(&buffer, &len, stdin) == -1)
            return my_printf("\n");
        buffer = last_charact(buffer);
        buffer = space_and_tabs(buffer);
        all->command = str_to_word_array(buffer, ';');
        for (int i = 0; all->command[i] != NULL; i++) {
            my_executable(all, space_and_tabs(all->command[i]));
            all->status = false;
        }
    }
}
