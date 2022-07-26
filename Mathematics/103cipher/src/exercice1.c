/*
** EPITECH PROJECT, 2021
** exercice1
** File description:
** bs103
*/

#include "include/my.h"

void print_tab(char **tab, int x)
{
    int i = 0;
    int a = 0;

    while (i != x) {
        a = 0;
        while (a != x - 1) {
            printf("%d    ", tab[i][a]);
            a++;
        }
        printf("%d\n", tab[i][a]);
        i++;
    }
}    

void end_of_tab(char **tab, int x)
{
    int i = x - 2;
    int a = 0;
    while (a < x) {
        if (tab[i][a] == '\0')
            tab[i][a] = 0;
        a++;
    }
    a = 0;
    i++;
    tab[i] = malloc(sizeof(char *) * x);
    while (a < x) {
        if (tab[i][a] == '\0')
            tab[i][a] = 0;
        a++;
    }
}

void str_to_tab(char **tab, char** argv, int x)
{
    int i = 0;
    int a = 0;
    int inc = 0;

    while (i < x) {
        tab[i] = malloc(sizeof(char *) * x);
        a = 0;
        while (a < x) {
            tab[i][a] = argv[2][inc];
            a++;
            inc++;
        }
        i++;
    }
    end_of_tab(tab, x);
}

int exo1(char **argv)
{
    int x = my_compute_square_root(my_strlen(argv[2]));
    char *tab[x];
    str_to_tab(tab, argv, x);
    printf("Key matrix:\n");
    print_tab(tab, x);
    return x;
}
