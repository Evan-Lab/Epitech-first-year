/*
** EPITECH PROJECT, 2021
** my_strcat.C
** File description:
** desc
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int buff = my_strlen(dest);
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[buff + i] = src[i];
    dest[buff + i] = '\0';
    return dest;
}
