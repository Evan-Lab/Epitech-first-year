/*
** EPITECH PROJECT, 2021
** my_defender - move_sprite.c
** File description:
** jitter jitter
*/

#include "defender.h"

void move_sprite_w_struct(sprite_t *sp)
{
    sfVector2f pos = {sp->pos.x, sp->pos.y};
    sfSprite_setPosition(sp->sprite, pos);
}

void move_sprite(sprite_t *sp, int x, int y)
{
    sfVector2f pos = {x, y};
    sfSprite_setPosition(sp->sprite, pos);
    sp->pos.x = x;
    sp->pos.y = y;
}

void move_def_sprite(sfSprite *sp, int x, int y)
{
    sfVector2f pos = {x, y};
    sfSprite_setPosition(sp, pos);
}
