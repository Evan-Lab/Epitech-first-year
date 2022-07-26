/*
** EPITECH PROJECT, 2022
** boxing.c
** File description:
** desc
*/

#include "tetris.h"

void score(void)
{
    for (int i = 10; i != 40; i++)
        mvprintw(10, i, "%c", '-');
    for (int i = 10; i != 40; i++)
        mvprintw(20, i, "%c", '-');
    for (int i = 11; i != 20; i++)
        mvprintw(i, 9, "%c", '|');
    for (int i = 11; i != 20; i++)
        mvprintw(i, 40, "%c", '|');
}

void next_piece(void)
{
    for (int i = 100; i != 110; i++)
        mvprintw(2, i, "%c", '-');
    for (int i = 3; i != 5; i++)
        mvprintw(i, 99, "%c", '|');
    for (int i = 100; i != 110; i++)
        mvprintw(5, i, "%c", '-');
    for (int i = 3; i != 5; i++)
        mvprintw(i, 110, "%c", '|');
}

void gaming_box(void)
{
    for (int i = 3; i != 22; i++)
        mvprintw(i, 75, "%c\n", '|');
    for (int i = 3; i != 22; i++)
        mvprintw(i, 95, "%c\n", '|');
    for (int i = 76; i != 95; i++)
        mvprintw(2, i, "%c", '-');
    for (int i = 76; i != 95; i++)
        mvprintw(22, i, "%c", '-');
}
