/*
** EPITECH PROJECT, 2022
** solver.h
** File description:
** desc
*/

#ifndef SOLVER_H
    #define SOLVER_H
    #include "my.h"
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <stdio.h>

typedef struct solver_s {
    char *buffer;
    char **map;
    int count_line;
} solver_t;

int main(int argc, char **argv);
char *take_file(char const *filepath);
void my_solver(solver_t *solver);
void resolver(solver_t *solver);
int error_handing(char const *filepath, int size);
#endif
