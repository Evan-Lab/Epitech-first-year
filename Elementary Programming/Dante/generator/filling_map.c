/*
** EPITECH PROJECT, 2022
** filling_map.c
** File description:
** desc
*/

#include "generator.h"

static void split_my_map_two(generator_t *generator, int i, int j)
{
    if (j % 2 != 0)
        generator->map[i][j] = 'X';
}

static void split_my_map(generator_t *generator, int i)
{
    if (i % 2 != 0)
        for (int j = 1; generator->map[i][j] != '\0'; j++)
            generator->map[i][j] = 'X';
    else
        for (int j = 1; generator->map[i][j] != '\0'; j++)
            split_my_map_two(generator, i, j);
}

void fill_map(generator_t *generator)
{
    for (int i = 0; i != generator->x; i++) {
        for (int j = 0; j != generator->y; j++)
            generator->map[i][j] = '*';
        generator->map[i][generator->y] = '\0';
    }
    for (int i = 1; generator->map[i] != NULL; i++)
        split_my_map(generator, i);
    generator->map[generator->x - 1][generator->y - 1] = '*';
}
