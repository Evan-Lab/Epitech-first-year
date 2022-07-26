/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** desc
*/

#ifndef MY_H
    #define MY_H
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>

void action(int argc, char **argv);
void help();
int my_compute_square_root(int nb);
void my_putchar(char c);
int main(int argc, char **argv);
int my_putstr(char const *str);
void exo1(char **argv, int x, char **tab);
int my_strlen(char const *str);
int message_key(int x, char **argv, int x1, char **tab);
void end_of_tab(char **tab, int x, char **argv);
void calc_matrix(char **key, char **message, int x, int x1);

#endif
