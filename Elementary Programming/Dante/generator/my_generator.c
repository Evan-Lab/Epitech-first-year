/*
** EPITECH PROJECT, 2022
** generator.c
** File description:
** desc
*/

#include "generator.h"

static void my_split(generator_t *generator, int i, int j)
{
    int alea;
    if (generator->map[i][j] == '*' && generator->map[i][j - 1] == 'X'
        && generator->map[i - 1][j] == 'X') {
        alea = rand() % 2;
        if (alea == 0)
            generator->map[i - 1][j] = '*';
        else
            generator->map[i][j - 1] = '*';
    }
}

static void fill_obstacle(generator_t *generator)
{
    time_t t;
    srand((unsigned) time(&t));
    for (int i = 1; generator->map[i] != NULL; i++) {
        for (int j = 1; generator->map[i][j] != '\0'; j++)
            my_split(generator, i, j);
    }
}

void malloc_map(generator_t *generator)
{
    generator->map = malloc(sizeof(char *) * (generator->x + 1));
    for (int i = 0; i != generator->x; i++)
        generator->map[i] = malloc(sizeof(char) * (generator->y + 1));
    generator->map[generator->x] = NULL;

    fill_map(generator);
    fill_obstacle(generator);
    generator->map[generator->x - 1][generator->y - 1] = '*';

}
