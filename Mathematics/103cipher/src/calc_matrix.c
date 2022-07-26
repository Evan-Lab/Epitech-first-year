/*
** EPITECH PROJECT, 2021
** 103cypher
** File description:
** calc_matrix
*/

#include "../include/my.h"

void calc(char **key, char **message, int *var)
{
    int i = 0;
    int result = 0;

    while (i != var[2]) {
        result = result + (key[i][var[0]] * message[var[1]][i]);
        i++;
    }
    if (var[1] == var[3] - 1 && var[0] == var[2] - 1)
        printf("%d", result);
    else
        printf("%d ", result);
}

void calc_matrix(char **key, char **message, int x, int x1)
{
    int i = 0;
    int a = 0;
    int var[4];

    var[2] = x;
    var[3] = x1;
    while (i != x1) {
        a = 0;
        var[1] = i;
        while (a != x) {
            var[0] = a;
            calc(key, message, var);
            a++;
        }
        i++;
    }
    printf("\n");
}
