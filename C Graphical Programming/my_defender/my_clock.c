/*
** EPITECH PROJECT, 2022
** my_clock.c
** File description:
** desc
*/

#include "defender.h"

void my_clock(sfRenderWindow *window, all_t *all, sfClock *limiter)
{
    sfTime time = sfClock_getElapsedTime((const sfClock *)limiter);
    if (all->elements->display_status == 1) {
        if (time.microseconds >= 100) {
            time = sfClock_restart(limiter);
            my_game(window, all);
            next_frame(all->enemy);
            show_path(window, all->path);
            display_sprite(window, all->path);
            show_ennemies(window, all);
            display_sprite(window, all->enemy);
        }
    }
}
