/*
** EPITECH PROJECT, 2022
** lib
** File description:
** my_strdup.c
*/

#include "my.h"

char *my_strdup(char const *src)
{
    char *dest;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    dest = my_strcpy(dest, src);
    return (dest);
}
