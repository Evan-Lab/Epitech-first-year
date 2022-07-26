/*
** EPITECH PROJECT, 2022
** take_tetriminos.c
** File description:
** desc
*/

#include "tetris.h"

void print_basics(void)
{
    my_printf("Key drop: KEY_DOWN (258)\n");
    my_printf("Key pause:   (32)\n");
    my_printf("Key turn: KEY_UP (259)\n");
}

static int get_files_number(void)
{
    struct dirent *dir;
    DIR *d = opendir("./tetriminos");
    int i = 0;

    if (!d)
        return 0;
    while ((dir = readdir(d)) != NULL) {
        if (my_strcmp(dir->d_name, ".") == 0 ||
            my_strcmp(dir->d_name, "..") == 0)
            continue;
        i++;

    }
    print_basics();
    my_printf("Number of tetriminos: %d\n", i);
    closedir(d);
    return i;
}

int get_files(tetriminos_t **tetriminos, int nb_files)
{
    struct dirent *dir;
    DIR *d = opendir("./tetriminos");
    int i = 0;

    if (!d)
        exit(84);

    for (int i = 0; i != nb_files + 2; i++) {
        dir = readdir(d);
        if (my_strcmp(dir->d_name, ".") == 0 ||
            my_strcmp(dir->d_name, "..") == 0)
            continue;
        open_and_read(tetriminos[i], dir);
    }
    closedir(d);
    return i;
}

void take_tetriminos(void)
{
    tetriminos_t **tetriminos;
    int nb_files = get_files_number();
    tetriminos = malloc(sizeof(tetriminos_t *) * nb_files);

    for (int i = 0; i != nb_files; i++)
        tetriminos[i] = malloc(sizeof(tetriminos_t));

    get_files(tetriminos, nb_files);
}
