/*
** EPITECH PROJECT, 2021
** files.c
** File description:
** desc
*/

#include "../include/my.h"

int my_atoi(char const *str)
{
    int result = 0;
    int neg = 1;
    int i = 0;

    if (str[0] == '-') {
        neg = -1;
        i = 1;
    }
    for (; str[i] >= '0' && str[i] <= '9'; i++) {
        result = result * 10;
        result = result + (str[i] - '0');
    }
    return result * neg;
}
