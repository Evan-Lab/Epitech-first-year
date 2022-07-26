/*
** EPITECH PROJECT, 2022
** lib
** File description:
** str_to_word_array.c
*/

#include "my.h"

static int spaces(char *str)
{
    int w = 0;
    int j = 0;

    while (str[w] == ' ' || str[w] == '\t') {
        j++;
        w++;
    }
    return (j);
}

static int rows(char *str)
{
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == ' ') || (str[i] == 9))
            y++;
    }
    return (y + 1);
}

static char **mem_alloc_2d_char_array(int rows, int columns)
{
    int i = 0;
    char **arr = malloc(sizeof(char *) * (rows + 1));

    while (i < rows) {
        arr[i] = malloc(sizeof(char) * columns);
        i = i + 1;
    }
    return (arr);
}

char **str_to_word_array(char *str)
{
    char **tab = mem_alloc_2d_char_array(rows(str), my_strlen(str));
    int i = spaces(str);
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t') {
            i++;
            j++;
            k = 0;
        }
        tab[j][k] = str[i];
        i++;
        k++;
    }
    return tab;
}
