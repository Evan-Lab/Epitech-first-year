/*
** EPITECH PROJECT, 2021
** display.c
** File description:
** desc
*/

#include "include/ls.h"

void display_total(char *direc)
{
    DIR *d = opendir(direc);
    struct dirent *read;
    struct stat st;
    int total = 0;

    while ((read = readdir(d)) != NULL) {
        if ((read->d_name)[0] != '.') {
            stat(read->d_name, &st);
            total = total + (st.st_blocks);
        }
    }
    closedir(d);
    my_putstr("total ");
    my_put_nbr(total / 2);
    my_putchar('\n');
}
