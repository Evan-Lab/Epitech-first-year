/*
** EPITECH PROJECT, 2021
** pb.c
** File description:
** desc
*/

#include "../include/my.h"

void my_pb(struct s_list *a)
{
    if (a->len_b == 0)
        a->arr_b[0] = a->arr_a[0];
    else {
        for (int i = a->len_b; i > 0; i--)
            a->arr_b[i] = a->arr_b[i - 1];
        a->arr_b[0] = a->arr_a[0];
    }
    if (a->len_a > 1) {
        for (int j = 0; j != a->len_a - 1; j++)
            a->arr_a[j] = a->arr_a[j + 1];
    }
    a->len_b = a->len_b + 1;
    a->len_a = a->len_a - 1;
    my_putstr("pb ");
}
