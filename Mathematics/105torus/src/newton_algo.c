/*
** EPITECH PROJECT, 2022
** newton_algo.c
** File description:
** desc
*/

#include "../include/my.h"

void newton_algo(globale_t *global)
{
    double fxn;
    double dfxn;
    double fxn1;
    double xn = 0.5;

    for (int i = 1; 1; i++) {
        fxn = equation_4th(xn, global);
        dfxn = 4 * global->a4 * pow(xn, 3) + 3 * global->a3 * pow(xn, 2)
            + 2 * global->a2 * xn + global->a1;
        xn = xn - (fxn / dfxn);
        fxn1 = equation_4th(xn, global);
        if (i == 1)
            printf("x = %.1f\n", xn);
        printf("x = %.*f\n", global->n, xn);
        if (fabs(fxn1) <= pow(10, -global->n))
            break;
    }
}
