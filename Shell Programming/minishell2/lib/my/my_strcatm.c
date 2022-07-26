/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** desc
*/

#include "my.h"

char *my_strcatm(char const *s1, char const *s2)
{
    int j = 0;
    int k = 0;

    char *str = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));

    for (int i = 0; s1[i] != '\0'; i++) {
        str[i] = s1[i];
        k++;
    }
    for (; s2[j] != '\0'; j++)
        str[j + k] = s2[j];
    str[j + k] = '\0';
    return str;
}
