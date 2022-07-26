/*
** EPITECH PROJECT, 2022
** 105torus
** File description:
** bisect_algo.c
*/

#include "../include/my.h"

void bisect_algo(globale_t *global)
{
    double fc;
    double fa;
    double a = 0;
    double b = 1;
    double c;
    for (int i = 1; 1; i++) {
        c = (a + b) / 2;
        fc = equation_4th(c, global);
        fa = equation_4th(a, global);
        if (i <= global->n)
            printf("x = %.*f\n", i, c);
        else
            printf("x = %.*f\n", global->n, c);
        if (fa * fc < 0)
            b = c;
        else
            a = c;
        if (fabs(fc) <= pow(10, -global->n))
            break;
    }
}
