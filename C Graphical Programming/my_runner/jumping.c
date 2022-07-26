/*
** EPITECH PROJECT, 2022
** jumping.c
** File description:
** desc
*/

#include "include/my_runner.h"

void jump_two(all_t *all)
{
    if (all->my_jump <= 200)
        all->sonic->my_posp.y --;
    if (all->my_jump > 400)
        all->sonic->my_posp.y ++;
    (all->my_jump)++;
    if (all->my_jump > 600)
        all->my_jump = 0;
}

void jump(all_t *all)
{
    if (all->my_jump != 0) {
        jump_two(all);
    }
}
