/*
** EPITECH PROJECT, 2022
** setenv.c
** File description:
** desc
*/

#include "my.h"

static char **my_alloc(int i, int j)
{
    char **arr = malloc(sizeof(char *) * i + 1);

    for (int r = 0; r < i; r++)
        arr[r] = malloc(sizeof(char) * j);
    arr[i + 1] = NULL;
    return arr;
}

static int count_array_size(char **arr)
{
    int i = 0;
    for (; arr[i] != NULL; i++)
        ;
    return i;
}

char **my_setenv(char **envp, char *buffer)
{
    int i = 0;
    int j = 0;
    char **new_env;
    char **buff = str_to_word_array(buffer, ' ');

    if (count_array_size(buff) == 1)
        return envp;
    for (; envp[i] != NULL; i++);
    new_env = my_alloc(i + 1, MAX_VARIABLE_SIZE);
    for (; envp[j] != NULL; j++)
        my_strcpy(new_env[j], envp[j]);
    if (count_array_size(buff) == 2)
        my_strcpy(new_env[j], my_strcat(buff[1], "="));
    if (count_array_size(buff) == 3) {
        my_strcat(buff[1], "=");
        my_strcpy(new_env[j], my_strcat(buff[1], buff[2]));
    }
    return new_env;
}
