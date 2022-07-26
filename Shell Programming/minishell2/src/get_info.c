/*
** EPITECH PROJECT, 2022
** get_info.c
** File description:
** desc
*/

#include "mini.h"

static void get_path(mini_t *all)
{
    int i = 0;
    all->path = malloc(sizeof(char) * my_strlen(all->envp[i]));

    for (; all->envp[i] != NULL; i++) {
        if (my_strncmp("PATH=", all->envp[i], 4) == 0)
            all->path = my_strchr(all->envp[i], '=') + 1;
    }
}

static void print_header(mini_t *all)
{
    my_printf("[");
    my_printf("%s", get_env(all, "HOSTNAME"));
    my_printf("%s]", get_env(all, "PWD"));
    my_printf("$> ");
}

void info_buffer(mini_t *all)
{
    print_header(all);
    get_path(all);
    get_bin(all);
}
