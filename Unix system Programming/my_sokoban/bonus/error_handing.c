/*
** EPITECH PROJECT, 2022
** error_handing.c
** File description:
** desc
*/

#include "soko.h"

int error_map(char *map)
{
    int player = 0;
    int boxes = 0;
    int hole = 0;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == 'P')
            player++;
        if (map[i] == 'O')
            boxes++;
        if (map[i] == 'X')
            hole++;
        if (map[i] != 'P' && map[i] != 'O' && map[i] != 'X' && map[i] != '\n'
            && map[i] != ' ' && map[i] != '#')
            return 1;
    }
    if (player != 1 || boxes != hole) {
        return 1;
    }
    return 0;
}

int error_handing(char const *filepath, int size)
{
    int fd = open(filepath, O_RDONLY);
    char *map = malloc(sizeof(char *) * size);
    map[size + 1] = '\0';
    int ret = read(fd, map, size);
    if (ret == -1)
        return 1;
    if (size == 0)
        return 1;
    return error_map(map);
}
