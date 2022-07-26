/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** desc
*/

#include "include/my_runner.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
