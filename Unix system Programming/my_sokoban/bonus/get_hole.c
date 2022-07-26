/*
** EPITECH PROJECT, 2022
** get_hole.c
** File description:
** desc
*/

#include "soko.h"

static int count_hole_two(char **map, int i, int j, int number_hole)
{
    if (map[i][j] == 'O')
        number_hole++;
    return number_hole;
}

static int count_hole(char **map)
{
    int number_hole = 0;

    for (int i = 0; map[i] != NULL; i++)
        for (int j = 0; map[i][j] != '\0'; j++)
            number_hole = count_hole_two(map, i, j, number_hole);
    return number_hole;
}

int **get_hole(char **map)
{
    int k = 0;
    int **hole_coordonate = malloc(sizeof(int *) * count_hole(map) + 1);

    for (int i = 0; i != count_hole(map); i++)
        hole_coordonate[i] = malloc(sizeof(int) * 2);
    hole_coordonate[count_hole(map)] = NULL;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'O') {
                hole_coordonate[k][0] = i;
                hole_coordonate[k][1] = j;
                k++;
            }
        }
    }
    return hole_coordonate;
}
