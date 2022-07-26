/*
** EPITECH PROJECT, 2022
** game.c
** File description:
** desc
*/

#include "defender.h"

void main_menu(sfRenderWindow *window, all_t *all)
{
    if (all->elements->display_status == 0) {
        all->main_menu->scale_menu.x = 1;
        all->main_menu->scale_menu.y = 1;
        all->main_menu->pos_menu.x = 0;
        all->main_menu->pos_menu.y = 0;
        sfSprite_setScale(all->main_menu->sprite_menu,
        all->main_menu->scale_menu);
        sfSprite_setPosition(all->main_menu->sprite_menu,
        all->main_menu->pos_menu);
        sfSprite_setTexture(all->main_menu->sprite_menu,
        all->main_menu->texture_menu, sfFalse);
        sfRenderWindow_drawSprite(window, all->main_menu->sprite_menu, NULL);
        button_menu(window, all);
        button_play(window, all);
    }
}

void my_game(sfRenderWindow *window, all_t *all)
{
    if (all->elements->display_status == 1) {
        all->map->pos_map.x = 0;
        all->map->pos_map.y = 0;
        all->map->scale_map.x = 3;
        all->map->scale_map.y = 3;
        sfSprite_setScale(all->map->my_sprite_map, all->map->scale_map);
        sfSprite_setPosition(all->map->my_sprite_map, all->map->pos_map);
        sfSprite_setTexture(all->map->my_sprite_map,
        all->map->my_texture_map, sfFalse);
        sfRenderWindow_drawSprite(window, all->map->my_sprite_map, NULL);
        the_tower(window, all);
        the_tower_two(window, all);
        the_wall(window, all);
        my_tony(window, all);
    }
}
