/*
** EPITECH PROJECT, 2022
** solver.c
** File description:
** desc
*/

#include "solver.h"

int main(int argc, char **argv)
{
    struct stat sb;
    stat(argv[1], &sb);
    solver_t *solver = malloc(sizeof(solver_t));

    if (error_handing(argv[1], sb.st_size) == 1)
        return 84;
    else if (argc == 2) {
        solver->buffer = take_file(argv[1]);
        my_solver(solver);
    }
    return 0;
}
