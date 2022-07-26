/*
** EPITECH PROJECT, 2022
** space_and_tabs
** File description:
** desc
*/

#include "my.h"

char *space_and_tabs(char *buffer)
{
    int i = 0;
    int j = my_strlen(buffer) - 1;
    int k = 0;
    char *str = malloc(sizeof(char) * my_strlen(buffer));

    for (; buffer[i] == ' ' || buffer[i] == '\t'; i++);
    for (; buffer[j] == ' ' || buffer[j] == '\t'; j--);
    for (; i <= j; i++) {
        if ((buffer[i] == ' ' && buffer[i + 1] == ' ') ||
            (buffer[i] == '\t' && buffer[i + 1] == '\t') ||
            (buffer[i] == ' ' && buffer[i + 1] == '\t') ||
            (buffer[i] == '\t' && buffer[i + 1] == ' '))
            continue;
        str[k] = buffer[i];
        k++;
    }
    return str;
}
