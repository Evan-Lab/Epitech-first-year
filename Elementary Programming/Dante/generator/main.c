/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** desc
*/

#include "generator.h"

int error_handing(int argc)
{
    if (argc != 3 && argc != 4)
        return 84;
    return 0;
}

void my_condition(int argc, char **argv, generator_t *generator)
{
    if (argc == 3) {
        imperfect(generator);
        my_print(generator);
    }
    if (argc == 4 && strcmp(argv[3], "perfect") == 0)
        my_print(generator);
}

int main(int argc, char **argv)
{
    generator_t *generator = malloc(sizeof(generator_t));
    if (error_handing(argc) == 84)
        return 84;
    generator->x = atoi(argv[1]);
    generator->y = atoi(argv[2]);
    malloc_map(generator);
    my_condition(argc, argv, generator);
    return 0;
}
