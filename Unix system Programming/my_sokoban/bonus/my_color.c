/*
** EPITECH PROJECT, 2022
** colorfull.c
** File description:
** desc
*/

#include "soko.h"

static void initiation_color(void)
{
    start_color();
    init_pair(0, COLOR_BLACK, COLOR_BLACK);
    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_YELLOW, COLOR_YELLOW);
    init_pair(4, COLOR_BLUE, COLOR_BLACK);
    init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(6, COLOR_CYAN, COLOR_BLACK);
    init_pair(7, COLOR_WHITE, COLOR_BLACK);
}

char **my_color(char **map)
{
    initiation_color();
    int color;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'P')
                color = 5;
            if (map[i][j] == '#')
                color = 3;
            if (map[i][j] == 'O')
                color = 4;
            if (map[i][j] == 'X')
                color = 2;
            if (map[i][j] == ' ')
                color = 0;
            attron(COLOR_PAIR(color));
            mvprintw(i, j, "%c", map[i][j]);
            attroff(COLOR_PAIR(color));
        }
    }
    return map;
}
