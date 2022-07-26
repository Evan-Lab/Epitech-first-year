/*
** EPITECH PROJECT, 2022
** ction.C
** File description:
** desc
*/

#include "include/my_runner.h"

void paradown(sfEvent event, all_t *all)
{
    if (all->sonic->my_posp.y <= 800 && all->my_jump == 0) {
        if (event.key.code == sfKeyDown)
            all->sonic->my_posp.y++;
    }
}

void paraup(sfEvent event, all_t *all)
{
    if (all->sonic->my_posp.y == 815 && all->my_jump == 0) {
        if (event.key.code == sfKeyUp)
            all->my_jump++;
    }
}

void pararight(sfEvent event, all_t *all)
{
    if (all->sonic->my_posp.x <= 1750) {
        if (event.key.code == sfKeyRight)
            all->sonic->my_posp.x ++;
    }

}

void parajump(sfEvent event, all_t *all)
{
    if (all->sonic->my_posp.x >= -40) {
        if (event.key.code == sfKeyLeft)
            all->sonic->my_posp.x --;
    }
}
