/*
** EPITECH PROJECT, 2022
** parralax.c
** File description:
** desc
*/

#include "include/my_runner.h"

void parralax5(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(window, all->spikes->my_sprite11, NULL);
    sfSprite_setScale(all->spikes->my_sprite11, all->spikes->scale11);
    sfSprite_setPosition(all->spikes->my_sprite11, all->spikes->my_pos11);
    sfSprite_setTexture(all->spikes->my_sprite11,
                        all->spikes->spikes, sfFalse);
    sfRenderWindow_drawSprite(window, all->spikes->my_sprite12, NULL);
    sfSprite_setScale(all->spikes->my_sprite12, all->spikes->scale12);
    sfSprite_setPosition(all->spikes->my_sprite12, all->spikes->my_pos12);
    sfSprite_setTexture(all->spikes->my_sprite12,
                        all->spikes->spikes, sfFalse);
    all->spikes->my_pos11.x -= 3;
    if (all->spikes->my_pos11.x <= (-2000)) {
        all->spikes->my_pos11.x = 1920;
        all->score += 10;
    }
    all->spikes->my_pos12.x -= 3;
    if (all->spikes->my_pos12.x <= (-2000)) {
        all->spikes->my_pos12.x = 1920;
        all->score += 10;
    }
}

void parralax4(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(window,all->city-> my_sprite3, NULL);
    sfSprite_setScale(all->city->my_sprite3, all->city->scale3);
    sfSprite_setPosition(all->city->my_sprite3, all->city->my_pos3);
    sfSprite_setTexture(all->city->my_sprite3,
    all->city->my_texture_city, sfFalse);
    sfRenderWindow_drawSprite(window, all->city->my_sprite6, NULL);
    sfSprite_setScale(all->city->my_sprite6, all->city->scale6);
    sfSprite_setPosition(all->city->my_sprite6, all->city->my_pos6);
    sfSprite_setTexture(all->city->my_sprite6,
    all->city->my_texture_city2, sfFalse);

    all->city->my_pos3.x -= 1;

    if (all->city->my_pos3.x == (-2000))
        all->city->my_pos3.x = 1920;
    all->city->my_pos6.x -= 1;
    if (all->city->my_pos6.x == (-2000))
        all->city->my_pos6.x = 1920;
}

void parralax3(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(window, all->city_two->my_sprite2, NULL);
    sfSprite_setScale(all->city_two->my_sprite2, all->city_two->scale2);
    sfSprite_setPosition(all->city_two->my_sprite2, all->city_two->my_pos2);
    sfSprite_setTexture(all->city_two->my_sprite2,
    all->city->my_texture_ville_fond1, sfFalse);
    sfRenderWindow_drawSprite(window, all->city->my_sprite7, NULL);
    sfSprite_setScale(all->city->my_sprite7, all->city->scale7);
    sfSprite_setPosition(all->city->my_sprite7, all->city->my_pos7);
    sfSprite_setTexture(all->city->my_sprite7,
    all->city->my_texture_ville_fond20, sfFalse);
    all->city_two->my_pos2.x -= 0.5;
    if (all->city_two->my_pos2.x <= (-2000))
        all->city_two->my_pos2.x = 1920;
    all->city->my_pos7.x -= 0.5;
    if (all->city->my_pos7.x <= (-2000))
        all->city->my_pos7.x = 1920;
}
