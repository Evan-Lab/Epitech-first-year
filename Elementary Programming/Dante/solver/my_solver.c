/*
** EPITECH PROJECT, 2022
** my_solver.c
** File description:
** desc
*/

#include "solver.h"

void my_solver(solver_t *solver)
{
    solver->map = str_to_word_array(solver->buffer);

    for (int i = 0; solver->map[i] != NULL; i++)
        printf("%s", solver->map[i]);
}
