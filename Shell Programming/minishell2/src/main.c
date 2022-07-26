/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** desc
*/

#include "mini.h"

static char **copy_envp(char **envp, mini_t *all)
{
    int x = 0;
    int y = 2048;

    for (; envp[x] != NULL; x++);
    all->envp = malloc(sizeof(char *) * (x + 1));
    for (int i = 0; i != x; i++) {
        all->envp[i] = malloc(sizeof(char) * y);
        all->envp[i] = my_strcpy(all->envp[i], envp[i]);
    }
    all->envp[x] = NULL;
    return all->envp;
}

int main(int argc, char **argv, char **envp)
{
    argv = argv;
    mini_t *all = malloc(sizeof(mini_t));
    copy_envp(envp, all);

    if (argc == 1)
        my_loop(all);
    else
        return 84;
    return 0;
}
