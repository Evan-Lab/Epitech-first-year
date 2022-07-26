/*
** EPITECH PROJECT, 2022
** setenv.c
** File description:
** desc
*/

#include "mini.h"

char **my_alloc(int i, int j)
{
    char **arr = malloc(sizeof(char *) * i + 1);

    for (int r = 0; r < i; r++)
        arr[r] = malloc(sizeof(char) * j);
    arr[i + 1] = NULL;
    return arr;
}

int count_array_size(char **arr)
{
    int i = 0;

    for (; arr[i] != NULL; i++);
    return i;
}

char **my_setenv(mini_t *all, char *buffer)
{
    int i = 0, j = 0;
    char **new_env;
    char **buff = str_to_word_array(buffer, ' ');

    if (my_strcmp(buff[0], "setenv") != 0 || all->status == true)
        return all->envp;
    all->status = true;
    if (count_array_size(buff) == 1)
        return all->envp;
    for (; all->envp[i] != NULL; i++);
    new_env = my_alloc(i + 1, MAX_VARIABLE_SIZE);
    for (; all->envp[j] != NULL; j++)
        my_strcpy(new_env[j], all->envp[j]);
    if (count_array_size(buff) == 2)
        my_strcpy(new_env[j], my_strcat(buff[1], "="));
    if (count_array_size(buff) == 3) {
        my_strcat(buff[1], "=");
        my_strcpy(new_env[j], my_strcat(buff[1], buff[2]));
    }
    return new_env;
}
