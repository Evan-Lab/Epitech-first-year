/*
** EPITECH PROJECT, 2021
** my_printf.cd
** File description:
** desc
*/

#include "../include/my.h"

void my_printf(char *s, ...)
{
    va_list arg;
    int e = 0;
    va_start(arg, s);

    while (s[e] != '\0') {
        if ((s[e] == '%') && (s[e + 1] == 'd')) {
            my_put_nbr(va_arg(arg, int));
            e++;
        }
        e++;
    }
    va_end(arg);
}
