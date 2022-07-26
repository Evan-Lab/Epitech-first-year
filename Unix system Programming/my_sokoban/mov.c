/*
** EPITECH PROJECT, 2022
** mov.c
** File description:
** desc
*/

#include "soko.h"

static char **movement(char **map, int key, int **hole_coordonate)
{
    int *coordonate = find_player(map);
    map = moving_player(map, coordonate, key, hole_coordonate);
    return map;
}

static char **mov(char **map)
{
    for (int i = 0; map[i] != NULL; i++)
        mvprintw(i, 0, "%s\n", map[i]);
    return map;
}

void game(char const *filepath)
{
    int key = 0;
    char **map = str_to_word_array(take_map(filepath), '\n');
    int **hole_coordonate = get_hole(map);
    initscr();
    noecho();

    while (key != 10) {
        for (int i = 0; map[i] != NULL; i++)
            mvprintw(i, 0, "%s\n",map[i]);
        key = getch();
        map = movement(map, key, hole_coordonate);
        if (check_victory(map, hole_coordonate) == 1) {
            mov(map);
            break;
        }
        clear();
    }
    endwin();
}
