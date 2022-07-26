/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** desc
*/

#include "../include/my.h"

char *my_revstr(char *str)
{
    char time;
    int first = 0;
    int end = my_strlen(str) - 1;

    while (first < end ) {
        time = str[first];
        str[first] = str[end];
        str[end] = time;
        first++;
        end--;
    }
    return (str);
}
