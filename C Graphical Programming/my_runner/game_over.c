/*
** EPITECH PROJECT, 2022
** game_over.c
** File description:
** desc
*/

#include "include/my_runner.h"

void game_over(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(window, all->over->my_sprite_game_over, NULL);
    sfSprite_setScale(all->over->my_sprite_game_over,
    all->over->scale_game_over);
    sfSprite_setPosition(all->over->my_sprite_game_over,
    all->over->pos_game_over);
    sfSprite_setTexture(all->over->my_sprite_game_over,
    all->over->my_texture_game_over, sfFalse);
}
