/*
** EPITECH PROJECT, 2021
** my_atoi
** File description:
** lib
*/

#include "../include/my.h"

static float int_to_float(int x, float j)
{
    if (x == 1)
        return j / 10;
    if (x == 2)
        return j / 100;
    if (x == 3)
        return j / 1000;
    if (x == 4)
        return j / 10000;
    if (x == 5)
        return j / 100000;
    if (x == 6)
        return j / 1000000;
    return 84;
}

static float calc(int i, float j, int x, char const *str)
{
    while (str[i] != '\0' && str[i] != '.') {
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
        }
        j = int_to_float(x, j);
    }
    return j;
}

static int verif(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] != '.' && str[i] < '0' && str[i] != '-') || str[i] > '9')
            return 84;
        i++;
    }
    return 0;
}

float my_atoi_float(char const *str)
{
    int i = verif(str);
    float j = 0;
    int x = 0;

    if (i != 0)
        return 84;
    if (str[0] == '-') {
        i++;
    }
    j = calc(i, j, x, str);
    if (str[0] == '-')
          j = j * (-1);
    return (j);
}
