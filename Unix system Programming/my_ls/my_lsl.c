/*
** EPITECH PROJECT, 2021
** my_ls_l
** File description:
** desc
*/

#include "include/ls.h"

void right(struct stat s)
{
    my_putchar((s.st_mode & S_IRUSR ? 'r' : '-'));
    my_putchar((s.st_mode & S_IWUSR ? 'w' : '-'));
    my_putchar((s.st_mode & S_IXUSR ? 'x' : '-'));
    my_putchar((s.st_mode & S_IRGRP ? 'r' : '-'));
    my_putchar((s.st_mode & S_IWGRP ? 'w' : '-'));
    my_putchar((s.st_mode & S_IXGRP ? 'x' : '-'));
    my_putchar((s.st_mode & S_IROTH ? 'r' : '-'));
    my_putchar((s.st_mode & S_IWOTH ? 'w' : '-'));
    my_putchar((s.st_mode & S_IXOTH ? 'x' : '-'));
}

int my_ls_l(DIR *directory)
{
    struct stat s;
    struct dirent *pDirent;
    char *direc = ".";

    display_total(direc);
    while ((pDirent = readdir(directory)) != NULL) {
        if ((pDirent->d_name)[0] != '.') {
            stat(pDirent->d_name, &s);
            source(s);
            right(s);
            others(s);
            temp(s);
            my_printf(" %s\n", pDirent->d_name);
        }
    }
    closedir(directory);
    return (0);
}
