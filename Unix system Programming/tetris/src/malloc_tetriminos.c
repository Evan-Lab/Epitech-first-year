/*
** EPITECH PROJECT, 2022
** malloc_tetriminos.c
** File description:
** desc
*/

#include "tetris.h"

void malloc_tetriminos(tetriminos_t *tetriminos, char **buffer)
{
    int x = 1;
    int y = 1000;
    int j = 0;

    for (; buffer[x] != NULL; x++);
    tetriminos->tetriminos = malloc(sizeof(char *) * (x));
    for (int i = 1; i != x - 1; i++) {
        tetriminos->tetriminos[j] = malloc(sizeof(char) * y);
        tetriminos->tetriminos[j] = my_strcpy(tetriminos->tetriminos[j],
            buffer[i]);
        j++;

    }
    tetriminos->tetriminos[x] = NULL;
    for (int p = 0; tetriminos->tetriminos[p] != NULL; p++)
        my_printf("%s\n", tetriminos->tetriminos[p]);
}
