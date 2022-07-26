/*
** EPITECH PROJECT, 2022
** menu.c
** File description:
** desc
*/

#include "include/my_runner.h"

void wait(sfRenderWindow *window, sfEvent event, all_t *all)
{
    if (all->x == 1)
        game(window, event, all);
}

void menu(sfRenderWindow *window, sfEvent event, all_t *all)
{
    if (all->x == 0) {
        sfRenderWindow_drawSprite(window,all->start->my_sprite_start, NULL);
        sfSprite_setScale(all->start->my_sprite_start,
        all->start-> scale_start);
        sfSprite_setPosition(all->start->my_sprite_start,
        all->start->pos_start);
        sfSprite_setTexture(all->start->my_sprite_start,
        all->start->my_texture_start, sfFalse);
        init(all);
        display_text(window, all);
    }
    if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyNumpad0)
            all->x = 1;
    }
    wait(window, event, all);
}
