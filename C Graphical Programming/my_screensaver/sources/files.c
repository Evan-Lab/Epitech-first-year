/*
** EPITECH PROJECT, 2021
** files.c
** File description:
** desc
*/

#include "../include/framebuffer.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int e = 0;

    while (str[e] != '\0') {
        my_putchar(str[e]);
        e++;
    }
    return (0);
}
