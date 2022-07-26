/*
** EPITECH PROJECT, 2021
** action.c
** File description:
** desc
*/
#include "../include/my.h"

void action(int argc, char **argv)
{
    int x = my_compute_square_root(my_strlen(argv[2]));
    char *key[x];
    int x1 = (my_strlen(argv[1]) - 1) / x + 1;
    char *message[x1];

    exo1(argv, x, key);
    message_key(x, argv, x1, message);
    printf("Encrypted message:\n");
    calc_matrix(key, message, x, x1);
}
