/*
** EPITECH PROJECT, 2021
** 102archi
** File description:
** main
*/

#include "../include/my.h"

int main(int argc, char **argv)
{
    if (argc > 13) {
        return 84;
    } if (argc < 2) {
        return 84;
    } if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            printf("USAGE\n    ./102architect x y transfo1 arg11 [arg12][transfo2 arg12 [arg22]] ...\n\n");
            printf("DESCRIPTION\n    x   abscissa of the original point\n");
            printf("    y   ordinate of the original point\n\n");
            printf("    transfo arg1 [arg2]\n    -t i j  translation along vector (i, j)\n");
            printf("    -z m n  scaling by factors m (x-axis) and n (y-axis)\n");
            printf("    -r d    rotation centered in 0 by a d degree angle\n");
            printf("    -s d    reflection over the axis passing through 0 with an inclination angle of d degrees\n");
        }
    } if (argc == 3) {
        exo1(argv);
    }
    if (argc == 6)
        if (argv[3][0] == '-' && argv[3][1] == 't') {
            exo2(argv);
            if (argv[3][0] == '-' && argv[3][1] == 'z')
                exo3(argv);
    } if (argc == 5) {
        if (argv[3][0] == '-' && argv[3][1] == 'r')
            exo4(argv);
        if (argv[3][0] == '-' && argv[3][1] == 's')
            exo5(argv);
    }
    return 0;
}
