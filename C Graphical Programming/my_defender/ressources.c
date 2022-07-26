/*
** EPITECH PROJECT, 2022
** ressources.c
** File description:
** desc
*/

#include "defender.h"

void my_texture(all_t *all)
{
    sfSprite_setTexture(all->wall->sprite_wall, all->wall->texture_wall,
    sfFalse);
    sfSprite_setTexture(all->lower_turet->sprite_lower_turet,
    all->lower_turet->texture_lower_turet, sfFalse);
    sfSprite_setTexture(all->the_tower->sprite_tower,
    all->the_tower->texture_tower, sfFalse);
    sfSprite_setTexture(all->button_menu->sprite_play,
    all->button_menu->texture_play, sfFalse);
    sfSprite_setTexture(all->button_menu->sprite_quit,
    all->button_menu->texture_quit, sfFalse);
    sfSprite_setTexture(all->allies->sprite_allies, all->allies->texture_allies, sfFalse);
}

void ressources(all_t *all)
{
    all->main_menu->texture_menu = sfTexture_createFromFile
        ("ressources/game_menu.png", NULL);
    all->map->my_texture_map = sfTexture_createFromFile
        ("ressources/my_grass.png", NULL);
    all->wall->texture_wall = sfTexture_createFromFile
        ("ressources/my_wall.png", NULL);
    all->lower_turet->texture_lower_turet = sfTexture_createFromFile
        ("ressources/slower_turret.png", NULL);
    all->the_tower->texture_tower = sfTexture_createFromFile
        ("ressources/turrets.png", NULL);
    all->button_menu->texture_play = sfTexture_createFromFile
        ("ressources/quit_button.png", NULL);
    all->button_menu->texture_quit = sfTexture_createFromFile
        ("ressources/play_button.png", NULL);
    all->allies->texture_allies = sfTexture_createFromFile
        ("ressources/tony_cropped.png", NULL);
}
