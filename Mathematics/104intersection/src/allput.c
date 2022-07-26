/*
** EPITECH PROJECT, 2022
** 104
** File description:
** affichage
*/

#include "../include/my.h"

void initializer_cone(all_t *all, char **argv)
{
    all->argv->xp = my_atoi_float(argv[2]);
    all->argv->yp = my_atoi_float(argv[3]);
    all->argv->zp = my_atoi_float(argv[4]);
    all->argv->xv = my_atoi_float(argv[5]);
    all->argv->yv = my_atoi_float(argv[6]);
    all->argv->zv = my_atoi_float(argv[7]);
    all->result->angle = (my_atoi_float(argv[8]) * M_PI) / 180;
    all->result->a = (all->argv->xv * all->argv->xv)
        + (all->argv->yv * all->argv->yv)
        - (all->argv->zv * all->argv->zv)
        * (tan(all->result->angle) * tan(all->result->angle));
    all->result->b = 2 * ((all->argv->xp * all->argv->xv)
        + all->argv->yp * all->argv->yv
        - all->argv->zp * all->argv->zv
        * (tan(all->result->angle) * tan(all->result->angle)));
    all->result->c = (all->argv->xp * all->argv->xp)
        + (all->argv->yp * all->argv->yp)
        - (all->argv->zp * all->argv->zp)
        * (tan(all->result->angle) * tan(all->result->angle));
}

void initializer_s(all_t *all, char **argv)
{
    all->argv->xp = my_atoi_float(argv[2]);
    all->argv->yp = my_atoi_float(argv[3]);
    all->argv->zp = my_atoi_float(argv[4]);
    all->argv->xv = my_atoi_float(argv[5]);
    all->argv->yv = my_atoi_float(argv[6]);
    all->argv->zv = my_atoi_float(argv[7]);
    all->argv->r = my_atoi_float(argv[8]);
    all->result->a = (all->argv->xv * all->argv->xv)
        + (all->argv->yv * all->argv->yv)
        + (all->argv->zv * all->argv->zv);
    all->result->b = (2 * all->argv->xp * all->argv->xv)
        + (2 * all->argv->yp * all->argv->yv)
        + (2 * all->argv->zp * all->argv->zv);
    all->result->c = (all->argv->xp * all->argv->xp)
        + (all->argv->yp * all->argv->yp)
        + (all->argv->zp * all->argv->zp)
        - (all->argv->r * all->argv->r);
}

void initializer_c(all_t *all, char **argv)
{
    all->argv->xp = my_atoi_float(argv[2]);
    all->argv->yp = my_atoi_float(argv[3]);
    all->argv->zp = my_atoi_float(argv[4]);
    all->argv->xv = my_atoi_float(argv[5]);
    all->argv->yv = my_atoi_float(argv[6]);
    all->argv->zv = my_atoi_float(argv[7]);
    all->argv->r = my_atoi_float(argv[8]);
    all->result->a = (all->argv->xv * all->argv->xv)
        + (all->argv->yv * all->argv->yv);
    all->result->b = (2 * all->argv->xp * all->argv->xv)
        + (2 * all->argv->yp * all->argv->yv);
    all->result->c = (all->argv->xp * all->argv->xp)
        + (all->argv->yp * all->argv->yp)
        - (all->argv->r * all->argv->r);
}


void contact_sphere(all_t *all)
{
    if (all->result->c == 0) {
        printf("There is an infinite number of intersection points.\n");
        return;
    }
    if (all->result->delta > 0) {
        printf("2 intersection points:\n");
        printf("(%.3f, %.3f, %.3f)\n",
               all->argv->xp + (all->result->x1 * all->argv->xv),
               all->argv->yp + (all->result->x1 * all->argv->yv),
               all->argv->zp + (all->result->x1 * all->argv->zv));
        printf("(%.3f, %.3f, %.3f)\n",
               all->argv->xp + (all->result->x2 * all->argv->xv),
               all->argv->yp + (all->result->x2 * all->argv->yv),
               all->argv->zp + (all->result->x2 * all->argv->zv));
    }
    if (all->result->delta == 0) {
        printf("1 intersection point:\n");
        printf("(%.3f, %.3f, %.3f)\n",
               all->argv->xp + (all->result->x0 * all->argv->xv),
               all->argv->yp + (all->result->x0 * all->argv->yv),
               all->argv->zp + (all->result->x0 * all->argv->zv));
    }
    if (all->result->delta < 0)
        printf("No intersection point.\n");
}

void putall(char **argv)
{
    if (argv[1][0] == '1')
        printf("Sphere of radius %s\n", argv[8]);
    if (argv[1][0] == '2')
	printf("Cylinder of radius %s\n", argv[8]);
    if (argv[1][0] == '3')
	printf("Cone with a %s degree angle\n", argv[8]);
    printf("Line passing through the point ");
    printf("(%s, %s, %s)", argv[2], argv[3], argv[4]);
    printf(" and parallel to the vector ");
    printf("(%s, %s, %s)\n", argv[5], argv[6], argv[7]);
}

void malloc_struct(all_t *all)
{
    all->argv = malloc(sizeof(argv1_t));
    all->result = malloc(sizeof(result_t));
}
