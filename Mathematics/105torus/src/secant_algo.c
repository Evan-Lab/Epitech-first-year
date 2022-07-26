/*
** EPITECH PROJECT, 2022
** 105toruq
** File description:
** secant_algo.c
*/

#include "../include/my.h"

double equation_4th(double x, globale_t *global)
{
    double eqt = global->a4 * pow(x, 4) + global->a3 * pow(x, 3)
            + global->a2 * pow(x, 2) + global->a1 * x + global->a0;
    return eqt;
}

void secant_algo(globale_t *global)
{
    double x0 = 0;
    double x1 = 1;
    double xn;
    double fx0;
    double fx1;
    for (int i = 1; 1; i++) {
        fx0 = equation_4th(x0, global);
        fx1 = equation_4th(x1, global);
        xn = x1 - (fx1 * (x1 - x0) / (fx1 - fx0));
        x0 = x1;
        x1 = xn;
        if (i == 1)
            printf("x = %.1f\n", xn);
        else
            printf("x = %.*f\n", global->n, xn);
        if (fabs(fx1) <= pow(10, -global->n))
            break;
    }
}
