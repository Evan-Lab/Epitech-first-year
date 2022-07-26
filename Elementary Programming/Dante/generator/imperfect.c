/*
** EPITECH PROJECT, 2022
** imperfect.c
** File description:
** desc
*/

#include "generator.h"

void my_split_imperfect(generator_t *generator, int i, int j)
{
    int random;

    if (generator->map[i][j] == 'X') {
        random = rand() % 5;
        if (random == 0)
            generator->map[i][j] = '*';
    }
}

void imperfect(generator_t *generator)
{
    for (int i = 1; generator->map[i] != NULL; i++) {
        for (int j = 1; generator->map[i][j] != '\0'; j++)
            my_split_imperfect(generator, i, j);
    }
}
