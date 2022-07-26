/*
** EPITECH PROJECT, 2022
** help.c
** File description:
** desc
*/

#include "include/my_runner.h"

void help(all_t *all)
{
    my_putstr("Finite runner created with CSFML\n\n");
    my_putstr("USAGE\n");
    my_putstr(" ./my_runner map.txt\n\n");
    my_putstr("OPTIONS\n");
    my_putstr(" -i          launch the game in infinty mode.\n");
    my_putstr(" -h          printf the usage and quit\n\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr(" KEY_UP    jump.\n");
    sfMusic_destroy(all->music);
}
