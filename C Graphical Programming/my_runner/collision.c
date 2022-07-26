/*
** EPITECH PROJECT, 2022
** collision.c
** File description:
** desc
*/

#include "include/my_runner.h"

void collision(all_t *all)
{
    if (all->sonic->my_posp.x + 100 > all->spikes->my_pos12.x &&
        all->sonic->my_posp.x < all->spikes->my_pos12.x + 10 &&
        all->sonic->my_posp.y > all->spikes->my_pos12.y -180)
        all->end = 1;
    if (all->sonic->my_posp.x + 100 > all->spikes->my_pos11.x &&
        all->sonic->my_posp.x < all->spikes->my_pos11.x + 10 &&
        all->sonic->my_posp.y > all->spikes->my_pos11.y -180)
        all->end = 1;
}
