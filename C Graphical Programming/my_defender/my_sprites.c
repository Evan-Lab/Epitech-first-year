/*
** EPITECH PROJECT, 2022
** my_spriting.c
** File description:
** desc
*/

#include "defender.h"

void my_spriting(all_t *all)
{
    all->map->my_sprite_map = sfSprite_create();
    all->lower_turet->sprite_lower_turet = sfSprite_create();
    all->wall->sprite_wall = sfSprite_create();
    all->the_tower->sprite_tower = sfSprite_create();
    all->main_menu->sprite_menu = sfSprite_create();
    all->button_menu->sprite_play = sfSprite_create();
    all->button_menu->sprite_quit = sfSprite_create();
    all->allies->sprite_allies = sfSprite_create();
}
