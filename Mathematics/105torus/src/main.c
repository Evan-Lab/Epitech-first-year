/*
** EPITECH PROJECT, 2022
** desc
** File description:
** desc
*/

#include "../include/my.h"

int main(int argc, char **argv)
{
    if (error_handing(argc, argv) == 84)
        return 84;
    globale_t *global = malloc(sizeof(globale_t));
    initialize(global, argv);
    if (global->opt == 1)
        bisect_algo(global);
    if (global->opt == 2)
        newton_algo(global);
    if (global->opt == 3)
        secant_algo(global);
}
