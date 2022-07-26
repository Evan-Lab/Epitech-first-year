/*
** EPITECH PROJECT, 2022
** lib.c
** File description:
** my_strchr.c
*/

#include "my.h"

char *my_strchr(char *str, int c)
{
    while (*str != '\0') {
        if (*str == c)
            return str;
        str++;
    }
    return str;
}
