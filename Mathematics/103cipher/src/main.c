/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** desc
*/

#include "../include/my.h"

int main(int argc, char **argv)
{
    if (argc == 1)
        return 84;
    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            help();
            return 0;
        } else
            return 84;
    }

    int x = my_compute_square_root(my_strlen(argv[2]));
    char *key[x];
    int x1 = (my_strlen(argv[1]) - 1) / x + 1;
    char *message[x1];
    if (argc == 1)
        return 84;
    if (argc == 3)
        return 84;
    if (argc == 4) {
        exo1(argv, x, key);
        message_key(x, argv, x1, message);
        printf("Encrypted message:\n");
        calc_matrix(key, message, x, x1);
    }
    if (argc > 4)
        return 84;
}
