/*
** EPITECH PROJECT, 2022
** tower.c
** File description:
** desc
*/

#include "defender.h"

void my_tony(sfRenderWindow *window, all_t *all)
{
    all->allies->scale_allies.x = 0.6;
    all->allies->scale_allies.y = 0.6;
    all->allies->pos_allies.x = 1070;
    all->allies->pos_allies.y = 770;
    sfSprite_setScale(all->allies->sprite_allies, all->allies->scale_allies);
    sfSprite_setPosition(all->allies->sprite_allies, all->allies->pos_allies);
    sfRenderWindow_drawSprite(window, all->allies->sprite_allies, NULL);
}

void the_wall(sfRenderWindow *window, all_t *all)
{
    all->wall->scale_wall.x = 0.2;
    all->wall->scale_wall.y = 0.2;
    all->wall->pos_wall.x = 1300;
    all->wall->pos_wall.y = 790;
    sfSprite_setScale(all->wall->sprite_wall, all->wall->scale_wall);
    sfSprite_setPosition(all->wall->sprite_wall, all->wall->pos_wall);
    sfRenderWindow_drawSprite(window, all->wall->sprite_wall, NULL);
}

void the_tower_two(sfRenderWindow *window, all_t *all)
{
    all->lower_turet->scale_lower_turet.x = 0.5;
    all->lower_turet->scale_lower_turet.y = 0.5;
    all->lower_turet->pos_lower_turet.x = 1500;
    all->lower_turet->pos_lower_turet.y = 800;
    sfSprite_setScale(all->lower_turet->sprite_lower_turet,
    all->lower_turet->scale_lower_turet);
    sfSprite_setPosition(all->lower_turet->sprite_lower_turet,
    all->lower_turet->pos_lower_turet);
    sfRenderWindow_drawSprite(window, all->lower_turet->sprite_lower_turet,
    NULL);
}

void the_tower(sfRenderWindow *window, all_t *all)
{
    all->the_tower->scale_tower.x = 0.37;
    all->the_tower->scale_tower.y = 0.37;
    all->the_tower->pos_tower.x = 1700;
    all->the_tower->pos_tower.y = 810;
    sfSprite_setScale(all->the_tower->sprite_tower,
    all->the_tower->scale_tower);
    sfSprite_setPosition(all->the_tower->sprite_tower,
    all->the_tower->pos_tower);
    sfRenderWindow_drawSprite(window, all->the_tower->sprite_tower, NULL);
}
