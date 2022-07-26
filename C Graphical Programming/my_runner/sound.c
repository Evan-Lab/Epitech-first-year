/*
** EPITECH PROJECT, 2022
** sound.c
** File description:
** desc
*/

#include "include/my_runner.h"

void sound(all_t *all)
{
    all->music = sfMusic_createFromFile("ressources/music_sonic.ogg");
    sfMusic_setLoop(all->music, sfTrue);
    sfMusic_play(all->music);
}
