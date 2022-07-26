/*
** EPITECH PROJECT, 2022
** print_map.c
** File description:
** desc
*/

#include "generator.h"

void my_print(generator_t *generator)
{
    for (int i = 0; i != generator->x - 1; i++)
        printf("%s\n", generator->map[i]);
    printf("%s", generator->map[generator->x - 1]);
}
