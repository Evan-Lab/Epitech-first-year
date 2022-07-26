/*
** EPITECH PROJECT, 2022
** get_info.c
** File description:
** desc
*/

#include "my.h"

void info_buffer(char **envp, mini_t *all)
{
    get_logname(envp, all);
    get_hostname(envp, all);
    get_path(envp, all);
    get_bin(all);
    get_pwd(envp, all);
    my_printf(RED "$> " RESET);
}

int get_path(char **envp, mini_t *all)
{
    int i = 0;
    all->path = malloc(sizeof(char) * my_strlen(envp[i]));

    for (; envp[i] != NULL; i++) {
        if (my_strncmp("PATH=", envp[i], 4) == 0)
            all->path = my_strchr(envp[i], '=') + 1;
    }
    return 0;
}

int get_pwd(char **envp, mini_t *all)
{
    int i = 0;
    all->pwd = malloc(sizeof(char) * my_strlen(envp[i]));
    for (; envp[i] != NULL; i++) {
        if (my_strncmp("PWD=", envp[i], 4) == 0) {
            all->pwd = my_strchr(envp[i], '=') + 24;
        }
    }
    my_printf(YELLOW "%s]" RESET, all->pwd);
    return 0;
}

int get_hostname(char **envp, mini_t *all)
{
    int i = 0;
    all->hostname = malloc(sizeof(char) * my_strlen(envp[i]));
    for (; envp[i] != NULL; i++) {
        if (my_strncmp("HOSTNAME=", envp[i], 9) == 0) {
            all->hostname = my_strchr(envp[i], '=') + 1;
        }
    }
    my_printf(GREEN "%s " RESET, all->hostname);
    return 0;
}

int get_logname(char **envp, mini_t *all)
{
    int i = 0;
    all->logname = malloc(sizeof(char) * my_strlen(envp[i]));
    for (; envp[i] != NULL; i++) {
        if (my_strncmp("LOGNAME=", envp[i], 8) == 0) {
            all->logname = my_strchr(envp[i], '=') + 1;
        }
    }
    my_printf(GREEN "[%s@" RESET, all->logname);
    return 0;
}
