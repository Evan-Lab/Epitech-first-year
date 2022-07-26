/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** desc
*/

#include "tetris.h"

int main(int argc, char **argv)
{
    if (argc > 3 || argc > 7)
        return 84;
    if (argc == 1)
        gaming();
    if (argc == 2 && my_strcmp(argv[1], "-D") == 0)
        take_tetriminos();
    if (argc == 3 && my_strcmp(" -D", argv[1]) &&
        my_strcmp("--help", argv[2]) == 0)
        help();
    return 0;
}
