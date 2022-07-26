/*
** EPITECH PROJECT, 2022
** soko.h
** File description:
** desc
*/

#ifndef SOKO_H
    #define SOKO_H
    #include "my.h"
    #include <ncurses.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <unistd.h>
    #include <fcntl.h>

int main(int argc, char **argv);
void help(void);
void function(void);
char *take_map(char const *filepath);
void game(char const *filepath);
int *find_player(char **map);
char **moving_player(char **, int *, int , int **);
char **moving_boxes(char **, int *, int , int *);
int error_handing(char const *filepath, int size);
int **get_hole(char **map);
int check_victory(char **map, int **hole_coordonate);
char **my_color(char **map);

#endif
