/*
** EPITECH PROJECT, 2021
** options.c
** File description:
** desc
*/

#include "bsq.h"

int geti(int **im, int rows, int columns, int result)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (im[i][j] == result)
                return (i);
        }
    }
    return 0;
}

int getj(int **im, int rows, int columns, int result)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (im[i][j] == result)
                return (j);
        }
    }
    return 0;
}

int **stock_int_map(char *buffer, int rows, int columns)
{
    int **im = mem_alloc_2d_int_array(rows, columns);
    int i = 0;
    int j = 0;

    for (int k = 0; buffer[k] != '\0'; k++) {
        if (buffer[k] == '.') {
            im[i][j] = 1;
            j++;
        } if (buffer[k] == 'o') {
            im[i][j] = 0;
            j++;
        } if (buffer[k] == '\n') {
            im[i][j] = -1;
            i++;
            j = 0;
        }
    }
    return im;
}
