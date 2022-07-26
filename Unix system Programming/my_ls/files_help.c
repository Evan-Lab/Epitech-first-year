/*
** EPITECH PROJECT, 2021
** my_files_second.c
** File description:
** desc
*/

#include "include/ls.h"

int my_strcmp(char const *s1 , char const *s2)
{
    int i = 0;

    for (; (s1[i] == s2[i]) && (s1[i] != '\0')
    && (s2[i] != '\0'); i += 1) {
    }
    return (s1[i] - s2[i]);
}
