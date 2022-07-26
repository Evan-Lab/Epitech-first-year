/*
** EPITECH PROJECT, 2022
** unsetenv.c
** File description:
** desc
*/

#include "mini.h"

char **my_unsetenv(mini_t *all, char *buffer)
{
    int i = 0, j = 0, k = 0;
    for (; all->envp[i] != NULL; i++);
    char **new_env = my_alloc(i, MAX_VARIABLE_SIZE);
    char **buff = str_to_word_array(buffer, ' ');
    if (my_strcmp(buff[0], "unsetenv") != 0 || all->status == true)
        return all->envp;
    all->status = true;
    if (count_array_size(buff) == 1)
        return all->envp;
    my_strcat(buff[1], "=");
    for (; all->envp[j] != NULL; j++) {
        if (my_strncmp(all->envp[j], buff[1], my_strlen(buff[1])) == 0)
            continue;
        my_strcpy(new_env[k], all->envp[j]);
        k++;
    }
    if (my_strlen(new_env[i - 1]) == 0)
        new_env[i - 1] = NULL;
    return new_env;
}
