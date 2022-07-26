/*
** EPITECH PROJECT, 2021
** pa.c
** File description:
** desc
*/

#include "../include/my.h"

void my_pa(struct s_list *a, int last)
{
    if (a->len_a == 0)
        a->arr_a[0] = a->arr_b[0];
    else {
        for (int i = a->len_a; i > 0; i--)
            a->arr_a[i] = a->arr_a[i - 1];
        a->arr_a[0] = a->arr_b[0];
    }
    if (a->len_b > 1) {
        for (int j = 0; j != a->len_b - 1; j++)
            a->arr_b[j] = a->arr_b[j + 1];
    }
    a->len_a = a->len_a + 1;
    a->len_b = a->len_b - 1;
    if (last == 0)
        my_putstr("pa ");
    else
        my_putstr("pa");
}
