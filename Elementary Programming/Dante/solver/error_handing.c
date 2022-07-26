/*
** EPITECH PROJECT, 2022
** error_handing.c
** File description:
** desc
*/

#include "solver.h"

int error_handing(char const *filepath, int size)
{
    int fd = open(filepath, O_RDONLY);
    char *file = malloc(sizeof(char *) * size);
    file[size + 1] = '\0';
    int ret = read(fd,file, size);
    if (ret == -1)
        return 1;
    if (size == 0)
        return 1;
    return 0;
}
