/*
** EPITECH PROJECT, 2022
** my_spriting.c
** File description:
** desc
*/

#include "include/my_runner.h"

void my_spriting_two(all_t *all)
{
    all->sky->my_sprite10 = sfSprite_create();
    all->sea->my_spritesea = sfSprite_create();
    all->spikes->my_sprite11 = sfSprite_create();
    all->spikes->my_sprite12 = sfSprite_create();
    all->start->my_sprite_start = sfSprite_create();
    all->over->my_sprite_game_over = sfSprite_create();
}

void my_spriting(all_t *all)
{
    all->clouds->my_sprite1 = sfSprite_create();
    all->city_two->my_sprite2 = sfSprite_create();
    all->city->my_sprite3 = sfSprite_create();
    all->city_two->my_sprite4 = sfSprite_create();
    all->city_two->my_sprite5 = sfSprite_create();
    all->city->my_sprite6 = sfSprite_create();
    all->city->my_sprite7 = sfSprite_create();
    all->clouds->my_sprite8 = sfSprite_create();
    all->city->my_sprite9 = sfSprite_create();
    all->clouds->my_sprite1 = sfSprite_create();
    all->sonic->my_spritep5 = sfSprite_create();
    all->sonic->my_spritep2 = sfSprite_create();
    all->sonic->my_spritep5 = sfSprite_create();
    my_spriting_two(all);
}
