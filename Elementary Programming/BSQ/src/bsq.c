/*
** EPITECH PROJECT, 2021
** bsq.c
** File description:
** BSQ
*/

#include "bsq.h"

void convert_map(char **map, int i, int j)
{
    if (map[i][j] == 'o')
        map[i][j] = '0';
    if (map[i][j] == '.')
        map[i][j] = '1';
}

int **fill_int_map(char **map, int rows, int columns)
{
    int **int_map = mem_alloc_2d_int_array(rows, columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            convert_map(map, i, j);
        }
    }
    return (int_map);
}

void algo(int **im, int i, int result, int columns)
{
    int **storage = im;

    for (int j = 0; j < columns - 1; j++) {
        if (i == 0 || j == 0)
            im[i][j];
        else if (im[i][j] > 0)
            storage[i][j] = 1 + min(im, i, j);
        if (storage[i][j] > result)
            result = storage[i][j];
    }
}

int calculate(int **im, int columns, int i, int result)
{
    int **storage = im;

    for (int j = 0; j < columns - 1; j++) {
        if (i == 0 || j == 0)
            im[i][j];
        else if (im[i][j] > 0)
            storage[i][j] = 1 + min(im, i, j);
        if (storage[i][j] > result)
            result = storage[i][j];
    }
    return (result);
}

int bsq(int **im, int rows, int columns)
{
    int result = 0;
    int i = 0;

    while (i < rows) {
        result = calculate(im, columns, i, result);
        i++;
    }
    return (result);
}
