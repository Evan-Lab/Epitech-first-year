/*
** EPITECH PROJECT, 2021
** exercice1
** File description:
** bs103
*/

#include "../include/my.h"

void print_tab(char **tab, int x)
{
    int i = 0;
    int a = 0;

    while (i != x) {
        a = 0;
        while (a != x - 1) {
            printf("%d\t", tab[i][a]);
            a++;
        }
        printf("%d\n", tab[i][a]);
        i++;
    }
}

void str_to_tab(char **tab, char** argv, int x)
{
    int i = 0;
    int a = 0;
    int inc = 0;

    while (i < x) {
        tab[i] = malloc(sizeof(char *) * x + 1);
        a = 0;
        while (a < x) {
            if (inc < my_strlen(argv[2])) {
                tab[i][a] = argv[2][inc];
                a++;
                inc++;
            } else {
                tab[i][a] = 0;
                a++;
            }
        }
        i++;
    }
}

void exo1(char **argv, int x, char **tab)
{
    str_to_tab(tab, argv, x);
    printf("Key matrix:\n");
    print_tab(tab, x);
    printf("\n");
}
