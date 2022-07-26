/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** desc
*/

#ifndef MY_H
    #define MY_H
    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>

typedef struct result_s {
    double a;
    double b;
    double c;
    double x1;
    double x2;
    double x0;
    double delta;
    double angle;
} result_t;

typedef	struct argv1_s {
    int argv1;
    float xp;
    float yp;
    float zp;
    float xv;
    float yv;
    float zv;
    float r;
} argv1_t;

typedef struct all_s {
    argv1_t *argv;
    result_t *result;
} all_t;

void contact_sphere(all_t *all);
void putall(char **argv);
void malloc_struct(all_t *all);
void initializer_s(all_t *all, char **argv);
void initializer_c(all_t *all, char **argv);
void delta(all_t *all);
int x0x1x2(all_t *all);
int main(int argc, char **argv);
float my_atoi_float(char const *str);
void initializer_cone(all_t *all, char **argv);

#endif
