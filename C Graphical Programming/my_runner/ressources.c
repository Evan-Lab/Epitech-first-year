/*
** EPITECH PROJECT, 2022
** ressources.c
** File description:
** desc
*/

#include "include/my_runner.h"

void ressource_two(all_t *all)
{
    all->over->my_texture_game_over = sfTexture_createFromFile
        ("ressources/sega-game-over.png", NULL);
    all->start->my_texture_start = sfTexture_createFromFile
        ("ressources/menu_sonic.png", NULL);
    all->city->my_texture_ville_fond20 = sfTexture_createFromFile
        ("ressources/back1.png", NULL);
    all->city->my_texture_ville_fond1 = sfTexture_createFromFile
        ("ressources/back1.png", NULL);
    all->city_two->my_texture_ville_fond2 = sfTexture_createFromFile
        ("ressources/back2.png", NULL);
    all->city->my_texture_ville_fond200 = sfTexture_createFromFile
        ("ressources/back2.png", NULL);
    all->city_two->my_texture_back3 = sfTexture_createFromFile
        ("ressources/back3.png", NULL);
    all->clouds->my_texture_clouds = sfTexture_createFromFile
        ("ressources/clouds.png", NULL);
    all->clouds->my_texture_clouds2 = sfTexture_createFromFile
        ("ressources/clouds.png", NULL);
}

void ressources(all_t *all)
{
    all->spikes->spikes = sfTexture_createFromFile
        ("ressources/spikes.png", NULL);
    all->sea->sea = sfTexture_createFromFile
        ("ressources/sea.png", NULL);
    all->sonic->p5 = sfTexture_createFromFile
        ("ressources/step3.png", NULL);
    all->sonic->p1 = sfTexture_createFromFile
        ("ressources/step1.png", NULL);
    all->sonic->p2 = sfTexture_createFromFile
        ("ressources/step2.png", NULL);
    all->sky->my_texture_sky = sfTexture_createFromFile
        ("ressources/sky.png", NULL);
    all->city->my_texture_city = sfTexture_createFromFile
        ("ressources/city.png", NULL);
    all->city->my_texture_city2 = sfTexture_createFromFile
        ("ressources/city.png", NULL);
    ressource_two(all);
}
