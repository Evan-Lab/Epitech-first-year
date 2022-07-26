/*
** EPITECH PROJECT, 2022
** execute.c
** File description:
** desc
*/

#include "my.h"

static char *action(char *buffer)
{
    int i = 0;
    char *last_charcater = malloc(sizeof(char) * my_strlen(buffer));

    for (; buffer[i] != '\n'; i++)
        last_charcater[i] = buffer[i];
    last_charcater[i] = '\0';
    return last_charcater;
}

static void split(char **envp, char *buffer, mini_t *all)
{
    if (my_strncmp("./", buffer, 2) == 0 ||
        my_strncmp("/", buffer, 1) == 0) {
        execution(buffer, envp);
        return;
    } else
        execve_ls(buffer, all, envp);
}

char **my_command(char **envp, char *buffer)
{
    if (my_strncmp("setenv", buffer, 6) == 0)
        envp = my_setenv(envp, buffer);
    if (my_strncmp("unsetenv", buffer, 8) == 0)
        envp = my_unsetenv(envp, buffer);
    return envp;
}

void execute(char **envp, mini_t *all)
{
    char *buffer = NULL;
    size_t len = 0;
    int wstatus;
    while (1) {
        info_buffer(envp, all);
        if (getline(&buffer, &len, stdin) == -1)
            return my_printf("\n");
        buffer = action(buffer);
        buffer = space_and_tabs(buffer);
        end(buffer);
        if (my_strncmp("setenv", buffer, 6) == 0 ||
            my_strncmp("unsetenv", buffer, 8) == 0) {
            envp = my_command(envp, buffer);
            continue;
        } if (fork() == 0) {
            split(envp, buffer, all);
            return;
        } else
            wait(&wstatus);
    }
}
