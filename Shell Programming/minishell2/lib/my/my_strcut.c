/*
** EPITECH PROJECT, 2022
** my_strcut.c
** File description:
** desc
*/

#include "my.h"

char *my_strcut(char *str, int nb)
{
    char *new_str = malloc(sizeof(char) * (my_strlen(str) - nb + 1));
    int k = 0;

    for (int i = nb; str[i] != '\0'; i++, k++)
        new_str[k] = str[i];
    new_str[k] = '\0';
    return new_str;
}
