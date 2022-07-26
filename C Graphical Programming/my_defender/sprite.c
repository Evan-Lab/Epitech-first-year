/*
** EPITECH PROJECT, 2021
** my_defender - sprite.c
** File description:
** jitter jitter
*/

#include "defender.h"

array_t *init_n_sprites(int nb, int pos_x, int pos_y, int health)
{
    int i = 0;
    array_t *sprites = malloc(sizeof(array_t));

    sprites->x = malloc(sizeof(int) * (nb + 1));
    sprites->y = malloc(sizeof(int) * (nb + 1));
    sprites->health = malloc(sizeof(int) * (nb + 1));
    sprites->x[nb+1] = -2147483648;
    sprites->y[nb+1] = -2147483648;
    sprites->health[nb+1] = -2147483648;
    for (; i < nb + 1; i++) {
        sprites->x[i] = pos_x;
        sprites->y[i] = pos_y;
        sprites->health[i] = health;
    }
    return sprites;
}

anim_t init_anim(sfVector2i step, sfVector2i max, sfBool wrap, int anim_delay)
{
    anim_t anim;
    anim.delay = anim_delay;
    anim.wrap = wrap;
    anim.step_h = step.y;
    anim.step_w = step.x;
    anim.max_h = max.y;
    anim.max_w = max.x;
    anim.sp_clock = sfClock_create();
    return anim;
}

sprite_t *init_sprite(char *img_path, anim_t anim_sp, sfIntRect crop,
sfVector2f size)
{
    sprite_t *sp = malloc(sizeof(sprite_t));
    sp->texture = sfTexture_createFromFile(img_path, NULL);
    sp->sprite = sfSprite_create();
    sfSprite_setTexture(sp->sprite, sp->texture, sfFalse);
    sp->dims = size;
    sp->crop = crop;
    sp->anim = anim_sp;
    sfSprite_setTextureRect(sp->sprite, crop);
    sp->pos.x = 0;
    sp->pos.y = 0;
    sfSprite_setPosition(sp->sprite, sp->pos);
    sp->status = 0;
    sp->offset = 0;
    return sp;
}

void next_frame(sprite_t *sp)
{
    int wrap = sp->anim.wrap;
    anim_t anim = sp->anim;
    sfIntRect rect = sp->crop;
    sfTime time = sfClock_getElapsedTime((const sfClock*)sp->anim.sp_clock);

    if (time.microseconds > anim.delay) {
        if ((rect.left >= anim.max_w || rect.left <= 0) && wrap == sfFalse)
            anim.step_w *= -1;
        else if ((rect.left >= anim.max_w || rect.left <= 0) && wrap == 1)
            rect.left = 0;
        rect.left += anim.step_w;
        sfSprite_setTextureRect(sp->sprite, rect);
        time = sfClock_restart(sp->anim.sp_clock);
    }
    sp->crop = rect;
    sp->anim = anim;
}

void display_sprite(sfRenderWindow *window, sprite_t *sp)
{
    sfRenderWindow_drawSprite(window, sp->sprite, NULL);
}
