/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** desc
*/

#include "soko.h"

int main(int argc, char **argv)
{
    struct stat sb;
    stat(argv[1], &sb);

    if (argc != 2)
        return 84;
    if (my_strcmp("-h", argv[1]) == 0)
        help();
    else {
        if (error_handing(argv[1], sb.st_size) == 1) {
            return 84;
        }
        game(argv[1]);
    }
    return 0;
}
