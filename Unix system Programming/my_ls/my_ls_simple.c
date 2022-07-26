/*
** EPITECH PROJECT, 2021
** my_ls_simple.c
** File description:
** desc
*/

#include "include/ls.h"

int my_ls(DIR *d)
{
    struct dirent *pDirent;

    while ((pDirent = readdir(d)) != NULL) {
        if ((pDirent->d_name)[0] != '.')
            my_printf("%s   ", pDirent->d_name);
    }
    my_printf("\n");
    closedir (d);
    return 0;
}

int my_ls_a(void)
{
    DIR *d;
    struct dirent *pDirent;

    d = opendir (".");
    while ((pDirent = readdir(d)) != NULL) {
        my_printf("%s   ", pDirent->d_name);
    }
    my_printf("\n");
    closedir (d);
    return 0;
}
