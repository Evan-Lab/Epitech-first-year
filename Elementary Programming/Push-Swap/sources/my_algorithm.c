/*
** EPITECH PROJECT, 2021
** my_algorithm.c
** File description:
** desc
*/

#include "../include/my.h"

int condition(struct s_list *a)
{
    for (int i = 0; i < a->len_a - 1; i++) {
        if (a->arr_a[i] > a->arr_a[i + 1])
            return 0;
    }
    return 1;
}

int get_min(struct s_list *a)
{
    int min = 2147483647;
    for (int i = 0; i < a->len_a; i++)
        if (a->arr_a[i] < min)
            min = a->arr_a[i];
    return min;
}

void my_algorithm(struct s_list *a)
{
    if (condition(a) == 1)
        return;
    while (a->len_a != 0) {
        int min = get_min(a);
        while (a->arr_a[0] != min)
            my_ra(a);
        my_pb(a);
    }
    while (a->len_b != 0)
        my_pa(a, a->len_b == 1);
}
