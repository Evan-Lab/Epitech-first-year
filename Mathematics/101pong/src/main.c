/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int my_putstr(char const *str);

void pingpong(char **argv);

int main(int argc, char **argv)
{
    if (argc == 1)
        return 84;
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        my_putstr("USAGE\n");
        my_putstr("    ./101pong x0 y0 z0 x1 y1 z1 n\n\n");
        my_putstr("DESCRIPTION\n    x0  ball abscissa at time t - 1\n");
        my_putstr("    y0  ball ordinate at time t - 1\n");
        my_putstr("    z0  ball altitude at time t - 1\n");
        my_putstr("    x1  ball abscissa at time t\n");
        my_putstr("    y1  ball ordinate at time t\n");
        my_putstr("    z1  ball altitude at time t\n");
        my_putstr("    n   time shift (greater than or equal to zero, integer)\n");
        return 0;
    }
    if (argc == 8)
        pingpong(argv);
    if (argc < 8 || argc > 8)
        return 84;
    return 0;
}
