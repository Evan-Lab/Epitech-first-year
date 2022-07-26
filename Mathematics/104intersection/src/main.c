/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** desc
*/

#include "../include/my.h"

int all_rest(int argc, char **argv)
{
    if (argc == 1)
        return 84;
    if ((argc > 2 && argc < 9) || argc > 9)
        return 84;
    if (argc <= 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            printf("USAGE\n");
            printf("    ./104intersection opt xp yp zp xv yv zv p\n\n");
            printf("DESCRIPTION\n");
            printf("    opt            surface option 1 for a sphere, 2 for a cylinder, 3 for a cone\n");
            printf("    (xp, yp, zp)   coordinates of a point by which the light ray passes through\n");
            printf("    (xv, yv, zv)   coodinates of a vector parralel to the light ray\n");
            printf("    p              parameter: radius of the sphere, radius of the cylinder, or\n");
            printf("                    angle formed but the cone and the Z-axis\n");
        } else return 84;
    }
    return 0;
}

int main(int argc, char **argv)
{
    int error = 0;
    all_t *all = malloc(sizeof(all_t));
    error = all_rest(argc, argv);
    if (error == 84)
        return 84;
    else if (argc == 2)
        return 0;
    malloc_struct(all);
    if (argv[1][0] == '1') {
        initializer_s(all, argv);
        delta(all);
        x0x1x2(all);
        putall(argv);
        contact_sphere(all);
    }
    if (argv[1][0] == '2') {
        initializer_c(all, argv);
        delta(all);
        x0x1x2(all);
        putall(argv);
	contact_sphere(all);
    }
    if (argv[1][0] == '3') {
        initializer_cone(all, argv);
        delta(all);
        x0x1x2(all);
        putall(argv);
        contact_sphere(all);
    }
}
