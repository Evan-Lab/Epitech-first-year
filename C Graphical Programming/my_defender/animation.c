/*
** EPITECH PROJECT, 2021
** my_defender - animation.c
** File description:
** jitter jitter
*/

#include "defender.h"

void my_animation(all_t *all)
{
    sfVector2f size = {132, 133};
    sfIntRect crop = {0, 20, 91, 133};
    sfVector2i step = {92, 133};
    sfVector2i max = {132, 133};
    sfVector2f scale = {0.9, 0.9};
    anim_t anim = init_anim(step, max, sfTrue, 100000);
    sfIntRect crop2 = {0, 0, 781, 804};
    sfVector2i step2 = {0, 0};
    sfVector2f scale2 = {0.1, 0.1};
    all->enemy = init_sprite("ressources/the_ennemies.png", anim, crop, size);
    move_sprite(all->enemy, 0, 0);
    sfSprite_setScale(all->enemy->sprite, scale);
    size.x = 781;
    size.y = 804;
    max.x = 0;
    max.y = 0;
    anim = init_anim(step2, max, sfTrue, 1000000);
    all->path = init_sprite("ressources/earth_block.png", anim, crop2, size);
    move_sprite(all->path, 0, 200);
    sfSprite_setScale(all->path->sprite, scale2);
}
