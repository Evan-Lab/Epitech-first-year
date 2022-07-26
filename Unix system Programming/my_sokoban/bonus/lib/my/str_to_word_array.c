/*
** EPITECH PROJECT, 2022
** my_str
** File description:
** desc
*/

#include "my.h"

static int rows(char *str, char separator)
{
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == separator || str[i] == 9)
            y++;
    }
    return (y + 1);
}

static int spaces(char *str, char separator)
{
    int w = 0;
    int j = 0;

    while (str[w] == separator || str[w] == '\t') {
        j++;
        w++;
    }
    return (j);
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

char **str_to_word_array(char *str, char separator)
{
    char **tab = mem_alloc_2d_char_array(rows(str, separator), my_strlen(str));
    int i = spaces(str, separator);
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        if (str[i] == separator) {
            i++;
            j++;
            k = 0;
        } if (str[i] == '\t') {
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
