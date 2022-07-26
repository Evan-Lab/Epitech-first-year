/*
** EPITECH PROJECT, 2021
** functions.c
** File description:
** desc
*/

#include "bsq.h"

int min(int **im, int i, int j)
{
    if (im[i - 1][j] <= im[i - 1][j - 1] && im[i - 1][j] <= im[i][j - 1])
        return (im[i - 1][j]);
    if (im[i - 1][j - 1] <= im[i - 1][j] && im[i - 1][j - 1] <= im[i][j - 1])
        return (im[i - 1][j - 1]);
    if (im[i][j - 1] <= im[i - 1][j - 1] && im[i][j - 1] <= im[i - 1][j])
        return (im[i][j - 1]);
    return 0;
}

char **mem_alloc_2d_char_array(int rows, int columns)
{
    int i = 0;
    char **arr = malloc(sizeof(char *) * (rows + 1));

    while (i < rows) {
        arr[i] = malloc(sizeof(char) * columns);
        i = i + 1;
    }
    return (arr);
}

int **mem_alloc_2d_int_array(int rows, int columns)
{
    int i = 0;
    int **arr = (int **)malloc(sizeof(int *) * rows);

    for (; i < rows; i++)
        arr[i] = (int *)malloc(sizeof(int) * columns);
    return arr;
}

void square(char **map, int i, int j, int result)
{
    for (int k = 0; k != result; k++) {
        for (int l = 0; l != result; l++) {
            map[i - k][j - l] = 'x';
        }
    }
}

char **stock_char_map(char *buffer, int rows, int columns)
{
    char **map = mem_alloc_2d_char_array(rows, columns);
    int i = 0;
    int j = 0;
    int k = 0;

    while (buffer[k] != '\0') {
        if (buffer[k] == '\n') {
            map[i][j] = buffer[k];
            i++;
            k++;
            j = 0;
        } else {
            map[i][j] = buffer[k];
            j++;
            k++;
        }
    }
    return (map);
}
