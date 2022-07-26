/*
** EPITECH PROJECT, 2021
** 102archi
** File description:
** exo1
*/

#include "../include/my.h"

/*float **matric_z();
float **matric_multipli(int *result)
{
float *result[3];
result[0] = malloc(sizeof(float) * 3);
result[1] =	malloc(sizeof(float) * 3);
result[2] =	malloc(sizeof(float) * 3);
}*/

float my_atoi_mod(char const *str)
{
    int i = 0;
    int x = 0;
    float j = 0;

    if (str[0] == '-') {
        i++;
    } while (str[i] != '\0' && str[i] != '.') {
        j = j * 10;
        j = j + str[i] - '0';
        i++;
    } if (str[i] == '.') {
        i++;
        while (str[i] != '\0') {
            j = j * 10;
            j = j + str[i] - '0';
            i++;
            x++;
        } if (x == 1) {
            j = j / 10;
        } else
            j = j / 100;
    } if (str[0] == '-') {
        j = j * (-1);
    }
    return (j);
}
