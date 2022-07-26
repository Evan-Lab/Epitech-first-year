/*
** EPITECH PROJECT, 2021
** my_defender - get_path_coordinates.c
** File description:
** jitter jitter
*/

#include "defender.h"

int check_line(char **tab, int y, char symb, int nb)
{
    int x = 0;
    for (; tab[y][x] != '\0'; x++) {
        if (tab[y][x] == symb)
            nb++;
    }
    return nb;
}

int nb_tiles(char **tab, char symb)
{
    int y = 0;
    int nb = 0;
    for (; tab[y] != NULL; y++)
        nb = check_line(tab, y, symb, nb);
    return nb;
}

array_t *get_path_coordinates(char **tab, char path_symb, sfVector2f dims)
{
    array_t *path_pos = malloc(sizeof(array_t));
    int y = 0;
    int x = 0;
    int path_track = 0;
    int path_length = nb_tiles(tab, path_symb);
    path_pos->x = malloc(sizeof(int) * path_length);
    path_pos->y = malloc(sizeof(int) * path_length);
    path_pos->x[path_length] = -2147483648;
    path_pos->y[path_length] = -2147483648;
    for (; tab[y] != NULL; y++) {
        for (; tab[y][x] != '\0'; x++) {
            if (tab[y][x] == path_symb) {
                path_pos->x[path_track] = (x*(dims.x*0.073))-30;
                path_pos->y[path_track] = (y*(dims.y*0.07));
                path_track++;
            }
        }
        x = 0;
    }
    return path_pos;
}

void show_path(sfRenderWindow *window, sprite_t *path)
{
    int i = 0;
    for (; path->mul_pos->x[i] != -2147483648; i++) {
        move_sprite(path, path->mul_pos->x[i], path->mul_pos->y[i]);
        display_sprite(window, path);
    }
}
