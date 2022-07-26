/*
** EPITECH PROJECT, 2021
** my_defender - nb_to_char_star.c
** File description:
** jitter jitter
*/

#include "defender.h"

char *my_revstr(char *str)
{
    int length_of_list = my_strlen(str);
    int i = 0;
    int l_o_l_max = length_of_list;
    char temp1;

    for (;i < length_of_list / 2; i++) {
        temp1 = str[i];
        str[i] = str[l_o_l_max - 1];
        str[l_o_l_max - 1] = temp1;
        l_o_l_max--;
    }
    return str;
}

int length_of_an_int(int nb)
{
    int final_return = 0;
    if (nb < 0) {
        final_return++;
        nb *= -1;
    }
    for (;nb != 0;final_return++)
        nb /= 10;
    return final_return;
}

char *nb_to_char_star(int nb)
{
    char *result = malloc(sizeof(char) * length_of_an_int(nb));
    int i = 0;
    if (nb > 0) {
        for (; nb != 0; i++) {
            result[i] = (nb % 10) + '0';
            nb = nb / 10;
        }
        result[i] = '\0';
    } else {
        result[0] = '0';
        result[1] = '\0';
    }
    result = my_revstr(result);
    return result;
}
