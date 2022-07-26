/*
** EPITECH PROJECT, 2022
** tetris.h
** File description:
** desc
*/

#ifndef TETRIS_H
    #define TETRIS_H
    #include "my.h"
    #include <ncurses.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <time.h>
    #include <stdbool.h>
    #include <dirent.h>

typedef struct tetriminos_s {
    char **tetriminos;
    int width;
    int height;
    int color;
} tetriminos_t;

int main(int argc, char **argv);
void take_tetriminos(void);
void help(void);
void gaming(void);
void gaming_box(void);
void next_piece(void);
void score(void);
void open_and_read(tetriminos_t *tetriminos, struct dirent *dir);
void malloc_tetriminos(tetriminos_t *tetriminos, char **buffer);

#endif
