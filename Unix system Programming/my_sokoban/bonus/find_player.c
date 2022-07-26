/*
** EPITECH PROJECT, 2022
** find_player.c
** File description:
** desc
*/

#include "soko.h"

static int *find_split(char **map, int *coordonate, int i, int j)
{
    if (map[i][j] == 'P') {
        coordonate[0] = i;
        coordonate[1] = j;
        return coordonate;
    }
    return coordonate;
}

int *find_player(char **map)
{
    int *coordonate = malloc(sizeof(int) * 2);

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++)
            coordonate = find_split(map, coordonate, i, j);
    }
    return coordonate;
}

static int *get_coordonate(int *new_coordonate, int key)
{
    if (key == 67)
        new_coordonate[1] += 1;
    if (key == 68)
        new_coordonate[1] -= 1;
    if (key == 65)
        new_coordonate[0] -= 1;
    if (key == 66)
        new_coordonate[0] += 1;
    return new_coordonate;
}

static char **show_hole(char **map, int **hole_coordonate)
{
    for (int i = 0; hole_coordonate[i] != NULL; i++) {
        if (map[hole_coordonate[i][0]][hole_coordonate[i][1]] == ' ') {
            map[hole_coordonate[i][0]][hole_coordonate[i][1]] = 'O';
        }
    }
    return map;
}

char **moving_player(char **map, int *coordonate, int key, int **hole_coord)
{
    int *new_coordonate = malloc(sizeof(int) * 2);
    new_coordonate[0] = coordonate[0];
    new_coordonate[1] = coordonate[1];
    new_coordonate = get_coordonate(new_coordonate, key);

    if (map[new_coordonate[0]][new_coordonate[1]] != '#') {
        if (map[new_coordonate[0]][new_coordonate[1]] == 'X')
            map = moving_boxes(map, coordonate, key, new_coordonate);
        else {
            map[coordonate[0]][coordonate[1]] = ' ';
            map[new_coordonate[0]][new_coordonate[1]] = 'P';
            map = show_hole(map, hole_coord);
        }
    }
    return map;
}
