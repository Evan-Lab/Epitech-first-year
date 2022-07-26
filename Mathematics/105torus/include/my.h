/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** desc
*/

#ifndef MY_H
    #define MY_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

typedef struct globale_s {
    double a0;
    double a1;
    double a2;
    double a3;
    double a4;
    double opt;
    int n;
} globale_t;

void help(void);
int main(int argc, char **argv);
int error_handing(int argc, char **argv);
void secant_algo(globale_t *global);
double equation_4th(double x, globale_t *global);
void newton_algo(globale_t *global);
void bisect_algo(globale_t *global);
void initialize(globale_t *global, char **argv);

#endif
