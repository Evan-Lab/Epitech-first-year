/*
** EPITECH PROJECT, 2022
** pipe.c
** File description:
** minishell2
*/

#include "mini.h"

bool verif_pipe(mini_t *all, char *buffer)
{
    for (int j = 0; buffer[j] != '\0'; j++) {
        if (buffer[j] == '|') {
            all->status = true;
            return true;
        }
    }
    return false;
}

void my_pipe(mini_t *all, char *buffer)
{
    int pipefd[2];
    char *buf;
    if (verif_pipe(all, buffer)) {
        char **pipe_command = str_to_word_array(buffer, '|');
        //reconstruire un peu le path_command
        pipe(pipefd);
        if (fork() == 0) {
            close(pipefd[1]);
            read(pipefd[0], &buf, 3000);
            execute_path(buf, all);
            close(pipefd[0]);
        } else {
            close(pipefd[0]);
            execute_path(buf, all);
        }
    }
}
