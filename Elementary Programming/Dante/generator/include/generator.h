/*
** EPITECH PROJECT, 2022
** generator.h
** File description:
** desc
*/

#ifndef GENERATOR_H
    #define GENERATOR_H
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <time.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

typedef struct generator_s {
    int x;
    int y;
    char **map;
} generator_t;

int main(int argc, char **argv);
void malloc_map(generator_t * generator);
void my_print(generator_t *generator);
void imperfect(generator_t *generator);
void my_split_imperfect(generator_t *generator, int i, int j);
void fill_map(generator_t *generator);
#endif
