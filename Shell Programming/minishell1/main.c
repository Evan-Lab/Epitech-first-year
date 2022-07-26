/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** desc
*/

#include "my.h"

int main(int argc, char **argv, char **envp)
{
    argv = argv;

    if (argc == 1) {
        mini_t *all = malloc(sizeof(mini_t));
        execute(envp, all);
    }
    return 0;
}
