/*
** EPITECH PROJECT, 2022
** 105torus
** File description:
** initialize.c
*/

#include "../include/my.h"

void initialize(globale_t *global, char **argv)
{
    global->opt = atof(argv[1]);
    global->a0 = atof(argv[2]);
    global->a1 = atof(argv[3]);
    global->a2 = atof(argv[4]);
    global->a3 = atof(argv[5]);
    global->a4 = atof(argv[6]);
    global->n = atof(argv[7]);
}
