/*
** EPITECH PROJECT, 2022
** my_arrlen.c
** File description:
** desc
*/

#include "my.h"

int my_arrlen(char **arr)
{
    int i = 0;

    while (arr[i] != NULL)
        i++;
    return i;

}
