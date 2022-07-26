/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** desc
*/

#include "include/my_runner.h"

int my_putstr(char const *str)
{
    int e = 0;

    while (str[e] != '\0') {
        my_putchar(str[e]);
        e++;
    }
    return (0);
}
