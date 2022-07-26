/*
** EPITECH PROJECT, 2022
** player.c
** File description:
** desc
*/

#include "include/my_runner.h"

void perso2(sfRenderWindow *window, all_t *all)
{
    if (all->step > 50) {
        sfRenderWindow_drawSprite(window, all->sonic->my_spritep5, NULL);
        sfSprite_setScale(all->sonic->my_spritep5,all->sonic->scalep);
        sfSprite_setPosition(all->sonic->my_spritep5, all->sonic->my_posp);
        sfSprite_setTexture(all->sonic->my_spritep5, all->sonic->p5, sfFalse);
        all->step++;
        if (all->step == 75)
            all->step = 0;
    }
}

void perso1(sfRenderWindow *window, all_t *all)
{
    if (all->step <= 25) {
        sfRenderWindow_drawSprite(window, all->sonic->my_spritep5, NULL);
        sfSprite_setScale(all->sonic->my_spritep5, all->sonic->scalep);
        sfSprite_setPosition(all->sonic->my_spritep5, all->sonic->my_posp);
        sfSprite_setTexture(all->sonic->my_spritep5, all->sonic->p1, sfFalse);
        all->step++;
    }
    if (all->step > 25 && all->step <= 50) {
        sfRenderWindow_drawSprite(window, all->sonic->my_spritep2, NULL);
        sfSprite_setScale(all->sonic->my_spritep2, all->sonic->scalep);
        sfSprite_setPosition(all->sonic->my_spritep2, all->sonic->my_posp);
        sfSprite_setTexture(all->sonic->my_spritep2, all->sonic->p2, sfFalse);
        all->step++;
    }
}
