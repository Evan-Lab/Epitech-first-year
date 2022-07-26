/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char const *str)
{
    write(1, &str, 8);
}
