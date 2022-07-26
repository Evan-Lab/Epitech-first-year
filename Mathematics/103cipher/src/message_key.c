/*
** EPITECH PROJECT, 2021
** 103cypher
** File description:
** key_message
*/

#include "../include/my.h"

int message_key(int x, char **argv, int x1, char **tab)
{
    int i = 0;
    int a = 0;
    int inc = 0;

    while(i < x1) {
        tab[i] = malloc(sizeof(char *) * x);
        a = 0;
        while (a < x) {
            if (inc <= my_strlen(argv[1])) {
                tab[i][a] = argv[1][inc];
                a++;
                inc++;
            } else {
                tab[i][a] = 0;
                a++;
                inc++;
            }
        }
        i++;
    }
    return 0;
}
