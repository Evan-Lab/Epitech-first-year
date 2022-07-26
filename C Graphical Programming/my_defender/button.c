/*
** EPITECH PROJECT, 2022
** button.c
** File description:
** desc
*/

#include "defender.h"

void button_menu(sfRenderWindow *window, all_t *all)
{
    all->button_menu->scale_play.x = 1;
    all->button_menu->scale_play.y = 1;
    all->button_menu->pos_play.x = 800;
    all->button_menu->pos_play.y = 700;
    sfSprite_setScale(all->button_menu->sprite_play,
    all->button_menu->scale_play);
    sfSprite_setPosition(all->button_menu->sprite_play,
    all->button_menu->pos_play);
    sfRenderWindow_drawSprite(window, all->button_menu->sprite_play, NULL);
    mouse_effect(window, all);
}

void button_play(sfRenderWindow *window, all_t *all)
{
    all->button_menu->scale_quit.x = 1;
    all->button_menu->scale_quit.y = 1;
    all->button_menu->pos_quit.x = 800;
    all->button_menu->pos_quit.y = 550;
    sfSprite_setScale(all->button_menu->sprite_quit,
    all->button_menu->scale_quit);
    sfSprite_setPosition(all->button_menu->sprite_quit,
    all->button_menu->pos_quit);
    sfRenderWindow_drawSprite(window, all->button_menu->sprite_quit, NULL);
    mousse_on_play(all);
}
