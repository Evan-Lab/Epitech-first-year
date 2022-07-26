/*
** EPITECH PROJECT, 2021
** swap_ra.c
** File description:
** desc
*/

#include "../include/my.h"

void my_ra(struct s_list *a)
{
    int i = 0;
    int save = a->arr_a[0];

    while (i < a->len_a - 1) {
        a->arr_a[i] = a->arr_a[i + 1];
        i++;
    }
    a->arr_a[a->len_a - 1] = save;
    my_putstr("ra ");
}
