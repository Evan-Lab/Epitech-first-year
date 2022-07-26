/*
** EPITECH PROJECT, 2022
** my_parralax.c
** File description:
** desc
*/

#include "include/my_runner.h"

void parralax_third(sfRenderWindow *window, all_t *all)
{
    sfSprite_setTexture(all->city_two->my_sprite5,
    all->city_two->my_texture_back3, sfFalse);
    sfRenderWindow_drawSprite(window, all->city_two->my_sprite5, NULL);
    sfRenderWindow_drawSprite(window, all->city_two->my_sprite4, NULL);
    sfSprite_setTexture(all->city_two->my_sprite4,
    all->city_two->my_texture_ville_fond2, sfFalse);
    sfSprite_setTexture(all->city->my_sprite9,
    all->city->my_texture_ville_fond200, sfFalse);
}

void parralax2(sfRenderWindow *window, all_t *all)
{
    parralax_third(window, all);
    sfSprite_setScale(all->city_two->my_sprite4, all->city_two->scale4);
    sfSprite_setPosition(all->city_two->my_sprite4, all->city_two->my_pos4);
    sfSprite_setTexture(all->city_two->my_sprite4,
    all->city_two->my_texture_ville_fond2, sfFalse);
    sfRenderWindow_drawSprite(window, all->city_two->my_sprite4, NULL);
    sfSprite_setScale(all->city->my_sprite9, all->city->scale9);
    sfSprite_setPosition(all->city->my_sprite9, all->city->my_pos9);
    sfSprite_setTexture(all->city->my_sprite9,
    all->city->my_texture_ville_fond200, sfFalse);
    sfRenderWindow_drawSprite(window, all->city->my_sprite9, NULL);
    all->city_two->my_pos4.x -= 0.3;
    if (all->city_two->my_pos4.x <= (-2000))
        all->city_two->my_pos4.x = 1920;
    all->city->my_pos9.x -= 0.3;
    if (all->city->my_pos9.x <= (-2000))
        all->city->my_pos9.x = 1920;
}

void parralax_four(sfRenderWindow *window, all_t *all)
{
    sfSprite_setTexture(all->sky->my_sprite10,
    all->sky->my_texture_sky, sfFalse);
    sfSprite_setScale(all->sky->my_sprite10, all->sky->scale10);
    sfSprite_setPosition(all->sky->my_sprite10, all->sky->my_pos10);
    sfRenderWindow_drawSprite(window, all->sky->my_sprite10, NULL);
}

void parralax1(sfRenderWindow *window, all_t *all)
{
    parralax_four(window, all);
    sfSprite_setScale(all->clouds->my_sprite1, all->clouds->scale1);
    sfSprite_setPosition(all->clouds->my_sprite1, all->clouds->my_pos1);
    sfSprite_setTexture(all->clouds->my_sprite1,
    all->clouds->my_texture_clouds, sfFalse);
    sfRenderWindow_drawSprite(window, all->clouds->my_sprite1, NULL);
    sfSprite_setScale(all->clouds->my_sprite8, all->clouds->scale8);
    sfSprite_setPosition(all->clouds->my_sprite8, all->clouds->my_pos8);
    sfSprite_setTexture(all->clouds->my_sprite8,
    all->clouds->my_texture_clouds2, sfFalse);
    sfRenderWindow_drawSprite(window, all->clouds->my_sprite8, NULL);
    all->clouds->my_pos8.x -= 0.1;
    if (all->clouds->my_pos8.x <= (-1920))
        all->clouds->my_pos8.x = 1900;
    all->clouds->my_pos1.x -= 0.1;
    if (all->clouds->my_pos1.x <= (-1920))
        all->clouds->my_pos1.x = 1900;
}
