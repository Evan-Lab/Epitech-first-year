/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** desc
*/

#ifndef MY_H
    #define MY_H
    #include <stdarg.h>
    #include <stdlib.h>
    #include <unistd.h>

char *convert_octal(char dec);
char *binary(int dec);
void my_putchar(char c);
int my_put_nbr(int nb);
char *my_revstr(char *str);
int my_strlen(char const *str);
void my_printf(char *s, ...);
int my_putstr(char const *str);
int my_second_printf(char *s, va_list arg, int e);
int my_third_printf(char *s, va_list arg, int e);
int my_fourth_printf(char *s, va_list arg, int e);
#endif
