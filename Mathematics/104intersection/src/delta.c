/*
** EPITECH PROJECT, 2021
** exercice1.C
** File description:
** desc
*/

#include "../include/my.h"

void delta(all_t *all)
{
    all->result->delta = (all->result->b * all->result->b)
        - (4 * all->result->a * all->result->c);
}
