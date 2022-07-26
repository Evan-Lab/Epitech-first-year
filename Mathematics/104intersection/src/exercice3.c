/*
** EPITECH PROJECT, 2021
** exercice3.c
** File description:
** desc
*/

#include "../include/my.h"

int x0x1x2(all_t *all)
{
    all->result->b = -(all->result->b);

    if (all->result->delta > 0) {
        all->result->x1 = (all->result->b + sqrt(all->result->delta))/(2 * all->result->a);
        all->result->x2 = (all->result->b - sqrt(all->result->delta))/(2 * all->result->a);
        all->result->x0 = 0;
    }
    if (all->result->delta == 0){
        all->result->x1 = 0;
        all->result->x2 = 0;
        all->result->x0 = all->result->b / (2 * all->result->a);
    }
    return 0;
}
