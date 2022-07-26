/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** desc
*/

#include <unistd.h>

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
