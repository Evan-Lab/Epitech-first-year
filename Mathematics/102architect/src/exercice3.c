/*
** EPITECH PROJECT, 2021
** 102arch
** File description:
** exo3
*/

#include "../include/my.h"

void exo4(char **argv)
{
    printf("Rotation by a %s degree angle\n", argv[4]);
    printf("%.2f  %.2f  0.00\n",
           cos(my_atoi_mod(argv[4]) * M_PI / 180),
           -sin(my_atoi_mod(argv[4]) * M_PI / 180));
    printf("%.2f  %.2f  0.00\n", sin(my_atoi_mod(argv[4]) * M_PI / 180),
           cos(my_atoi_mod(argv[4]) * M_PI / 180));
    printf("0.00  0.00  1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", my_atoi_mod(argv[1]),
    my_atoi_mod(argv[2]), my_atoi_mod(argv[2]), my_atoi_mod(argv[1]));

}

void exo5(char **argv)
{
    printf("Reflection over an axis with an inclinaison angle of %s degrees\n"
           , argv[4]);
    printf("%.2f  %.2f  0.00\n",
           cos((2 * my_atoi_mod(argv[4])) * M_PI / 180),
           sin((2 * my_atoi_mod(argv[4])) * M_PI / 180));
    printf("%.2f  %.2f  0.00\n", sin((2 * my_atoi_mod(argv[4])) * M_PI / 180),
           -cos((2 * my_atoi_mod(argv[4])) * M_PI / 180));
    printf("0.00  0.00  1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", my_atoi_mod(argv[1]),
    my_atoi_mod(argv[2]), my_atoi_mod(argv[2]), my_atoi_mod(argv[1]));
}
