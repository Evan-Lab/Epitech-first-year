/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** desc
*/

#include "../include/my.h"

int my_strlen(char const *str)
{
    int e = 0;

    while (str[e] != '\0') {
        e++;
    }
    return (e);
}
