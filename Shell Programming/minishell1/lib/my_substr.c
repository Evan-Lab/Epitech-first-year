/*
** EPITECH PROJECT, 2022
** my_substr.c
** File description:
** desc
*/

#include "my.h"

char *my_substr(char const *str, int start, int end)
{
    char *strg = NULL;

    strg = malloc(sizeof(char) + (end - start + 1));
    for (int i = 0; i < end - start; i++) {
        strg[i] = str[start + i];
    }
    strg[end - start] = '\0';
    return strg;
}
