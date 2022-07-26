/*
** EPITECH PROJECT, 2022
** error_handing.c
** File description:
** desc
*/

#include "../include/my.h"

int error_handing(int argc, char **argv)
{
    if (argc == 1)
        return 84;
    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            help();
            return 0;
        } else
            return 84;
    }
    if (argv[1][0] != '1' && argv[1][0] != '2' && argv[1][0] != '3')
        return 84;
//if (argv[3][0] != '0')
    //return 84;
    //if (argv[4][0] != '6')
    //  return 84;
    if (argc < 8 || argc > 8)
        return 84;
    return 0;
}
