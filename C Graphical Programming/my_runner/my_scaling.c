/*
** EPITECH PROJECT, 2022
** my_scaling.c
** File description:
** desc
*/

#include "include/my_runner.h"

void scaling_two_position(all_t *all)
{
    all->city_two->my_pos5.x = 0;
    all->city_two->my_pos5.y = 350;
    all->city_two->scale5.x = 3;
    all->city_two->scale5.y = 3;
    sfSprite_setScale(all->sky->my_sprite10, all->sky->scale10);
    sfSprite_setScale(all->sky->my_sprite10, all->sky->my_pos10);
    sfSprite_setScale(all->over->my_sprite_game_over,
    all->over->scale_game_over);
    sfSprite_setPosition(all->over->my_sprite_game_over,
    all->over->pos_game_over);
    sfSprite_setScale(all->start->my_sprite_start,all->start-> scale_start);
    sfSprite_setPosition(all->start->my_sprite_start, all->start->pos_start);
    sfSprite_setPosition(all->city_two->my_sprite5, all->city_two->my_pos5);
    sfSprite_setScale(all->city_two->my_sprite5, all->city_two->scale5);
    sfSprite_setScale(all->sonic->my_spritep5, all->sonic->scalep);
    sfSprite_setPosition(all->sonic->my_spritep5, all->sonic->my_posp);
    sfSprite_setScale(all->sonic->my_spritep5, all->sonic->scalep);
    sfSprite_setPosition(all->sonic->my_spritep5, all->sonic->my_posp);
    sfSprite_setScale(all->sonic->my_spritep2, all->sonic->scalep);
    sfSprite_setPosition(all->sonic->my_spritep2, all->sonic->my_posp);
}

void scaling_position(all_t *all)
{
    sfSprite_setScale(all->spikes->my_sprite12, all->spikes->scale12);
    sfSprite_setPosition(all->spikes->my_sprite12, all->spikes->my_pos12);
    sfSprite_setScale(all->spikes->my_sprite11, all->spikes->scale11);
    sfSprite_setPosition(all->spikes->my_sprite11, all->spikes->my_pos11);
    sfSprite_setScale(all->sea->my_spritesea, all->sea->scalesea);
    sfSprite_setPosition(all->sea->my_spritesea, all->sea->my_possea);
    sfSprite_setScale(all->clouds->my_sprite1, all->clouds-> scale1);
    sfSprite_setPosition(all->clouds->my_sprite1, all->clouds->my_pos1);
    sfSprite_setScale(all->city_two->my_sprite2, all->city_two->scale2);
    sfSprite_setPosition(all->city_two->my_sprite2, all->city_two->my_pos2);
    sfSprite_setScale(all->city_two->my_sprite4, all->city_two->scale4);
    sfSprite_setPosition(all->city_two->my_sprite4, all->city_two->my_pos4);
    scaling_two_position(all);
}
