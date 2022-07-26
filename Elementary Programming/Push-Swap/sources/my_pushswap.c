/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** desc
*/

#include "../include/my.h"

int free_end_mode(struct s_list *a)
{
    free(a->arr_a);
    free(a->arr_b);
    free(a);
    my_putchar('\n');
    return 0;
}

int main(int argc, char **argv)
{
    int size = argc - 1;
    struct s_list *a = malloc(sizeof(struct s_list));
    a->len_a = size;
    a->len_b = 0;
    a->arr_a = malloc(sizeof(int) * size);
    a->arr_b = malloc(sizeof(int) * size);

    if (argc == 1 || a->arr_a == NULL || a->arr_b == NULL)
        return 84;
    if (argc == 2) {
        return free_end_mode(a);
    }
    for (int i = 0; i < argc - 1; i++)
        a->arr_a[i] = my_atoi(argv[i + 1]);
    my_algorithm(a);
    return free_end_mode(a);
}
