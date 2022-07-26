/*
** EPITECH PROJECT, 2022
** flags.c
** File description:
** desc
*/

#include "ls.h"

int flag_l(int argc, char **argv, int a)
{
    if (argc > 1 && my_strcmp("-l", argv[1]) == 0 && a == 0) {
        my_ls_l(opendir("."));
        a++;
    }
    return a;
}

int flag(int argc, char **argv, int a)
{
    if (argc == 1 && a == 0) {
        my_ls(opendir("."));
        a++;
    }
    if (argc == 2 && a == 0 && my_strcmp(argv[1], "-a") != 0) {
        my_ls(opendir(argv[1]));
        a++;
    }
    return a;
}

int flag_a(int argc, char **argv, int a)
{
    if (argc > 1 && my_strcmp("-a", argv[1]) == 0 && a == 0) {
        my_ls_a();
        a++;
    } if (argc > 1 && my_strcmp("-a", argv[1]) == 0 && a == 0) {
        my_ls_a();
    }
    return a;
}
