/*
** EPITECH PROJECT, 2022
** boxes.c
** File description:
** desc
*/

#include "soko.h"

char **moving_boxes(char **map, int *coord, int key, int *boxe_coord)
{
    int *new_boxe_coordonate = malloc(sizeof(int) * 2);
    new_boxe_coordonate[0] = boxe_coord[0];
    new_boxe_coordonate[1] = boxe_coord[1];

    if (key == 67)
        new_boxe_coordonate[1] += 1;
    if (key == 68)
        new_boxe_coordonate[1] -= 1;
    if (key == 65)
        new_boxe_coordonate[0] -= 1;
    if (key == 66)
        new_boxe_coordonate[0] += 1;
    if (map[new_boxe_coordonate[0]][new_boxe_coordonate[1]] != '#' &&
        map[new_boxe_coordonate[0]][new_boxe_coordonate[1]] != 'X') {
        map[boxe_coord[0]][boxe_coord[1]] = 'P';
        map[coord[0]][coord[1]] = ' ';
        map[new_boxe_coordonate[0]][new_boxe_coordonate[1]] = 'X';
    }
    return map;
}
