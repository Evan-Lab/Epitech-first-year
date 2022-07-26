/*
** EPITECH PROJECT, 2021
** exercice 2.c
** File description:
** desc
*/

#include "../include/my.h"

float verif(float x)
{
    if (x > -0.00 && x > 0) {
        x = x * -1;
    }
    return x;
}

float convert_radtodeg(float x)
{
    x = x * M_PI / 180;
    return x;
}

void exo1(char **argv)
{
    printf("%s\n%s\n1\n", argv[1], argv[2]);
}

void exo2(char **argv)
{
    printf("Translation along vector (%s, %s)\n", argv[4], argv[5]);
    printf("1.00  0.00  %.2f\n", my_atoi_mod(argv[4]));
    printf("0.00  1.00  %.2f\n", my_atoi_mod(argv[5]));
    printf("0.00  0.00  1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", my_atoi_mod(argv[1]),
    my_atoi_mod(argv[2]), my_atoi_mod(argv[1]) + my_atoi_mod(argv[4]),
    my_atoi_mod(argv[2]) + my_atoi_mod(argv[5]));
}

void exo3(char **argv)
{
    printf("Scalling by factor %s and %s\n", argv[4], argv[5]);
    printf("%.2f  0.00  0.00\n", my_atoi_mod(argv[4]));
    printf("0.00  %.2f  0.00\n", my_atoi_mod(argv[5]));
    printf("0.00  0.00  1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n",
    my_atoi_mod(argv[1]), my_atoi_mod(argv[2]),
    my_atoi_mod(argv[1]) * my_atoi_mod(argv[4]),
    my_atoi_mod(argv[2]) * my_atoi_mod(argv[5]));
}
