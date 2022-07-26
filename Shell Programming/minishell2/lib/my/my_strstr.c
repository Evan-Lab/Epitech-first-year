/*
** EPITECH PROJECT, 2022
** my_strstr.c
** File description:
** desc
*/

#include "my.h"

int my_strstr(char *str, char *str_2)
{
    for (int i = 0; str_2[i] != '\0'; i++) {
        if (str_2[i] != str[i])
            return 1;
    }
    return 0;
}
