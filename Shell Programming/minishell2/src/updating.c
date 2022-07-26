/*
** EPITECH PROJECT, 2022
** updating.c
** File description:
** desc
*/

#include "mini.h"

char **split_pwd(mini_t *all, char *value, int i)
{
    if (my_strncmp(all->envp[i], "PWD=", 4) == 0) {
        for (int j = 4; all->envp[i][j] != '\0'; j++)
            all->envp[i][j] = '\0';
        all->envp[i] = my_strcat(all->envp[i], value);
    }
    return all->envp;
}

char **update_pwd(mini_t *all, char *value)
{
    for (int i = 0; all->envp[i] != NULL; i++)
        all->envp = split_pwd(all, value, i);
    return all->envp;
}

char **split_update_old_pwd(mini_t *all, char *value, int i)
{
    if (my_strncmp(all->envp[i], "OLDPWD=", 7) == 0) {
        for (int j = 7; all->envp[i][j] != '\0'; j++)
            all->envp[i][j] = '\0';
        all->envp[i] = my_strcat(all->envp[i], value);
    }
    return all->envp;
}

char **update_old_pwd(mini_t *all, char *value)
{
    int i = 0;
    for (; all->envp[i] != NULL; i++)
        all->envp = split_update_old_pwd(all, value, i);
    my_setenv(all, my_strcatm("setenv OLDPWD ", value));
    return NULL;
}
