/*
** EPITECH PROJECT, 2022
** game.c
** File description:
** desc
*/

#include "tetris.h"

void gaming(void)
{
    int key = 0;
    initscr();
    noecho();

    while (key != 10) {
        gaming_box();
        next_piece();
        score();
        key = getch();

    }
    clear();
    endwin();
}
