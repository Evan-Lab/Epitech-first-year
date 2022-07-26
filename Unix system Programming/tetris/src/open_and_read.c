/*
** EPITECH PROJECT, 2022
** open_and_read.c
** File description:
** desc
*/

#include "tetris.h"

void open_and_read(tetriminos_t *tetriminos, struct dirent *dir)
{
    int i = 0;

    int fd = open(my_strcatm("./tetriminos/", dir->d_name), O_RDONLY);
    struct stat stat_size;
    stat(my_strcatm("./tetriminos/", dir->d_name), &stat_size);
    char *buff = malloc(sizeof(char) * stat_size.st_size);
    read(fd, buff, stat_size.st_size);
    char **tetris = str_to_word_array(buff, ' ');

    for (; tetris[i] != NULL; i++);
    if (i < 3)
        return;
    tetriminos->width = my_atoi(tetris[0]);
    tetriminos->height = my_atoi(tetris[1]);
    tetriminos->color = my_atoi(tetris[2]);
    char **buffer = str_to_word_array(buff, '\n');
    malloc_tetriminos(tetriminos, buffer);
    close(fd);
}
