/*
** EPITECH PROJECT, 2022
** victory.c
** File description:
** desc
*/

#include "soko.h"

int check_victory(char **map, int **hole_coordonate)
{
    for (int i = 0; hole_coordonate[i] != NULL; i++) {
        if (map[hole_coordonate[i][0]][hole_coordonate[i][1]] != 'X')
            return 0;
    }
    return 1;
}
