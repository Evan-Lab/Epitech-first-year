/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** desc
*/

#ifndef MY_H
    #define MY_H
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <stdio.h>

typedef struct s_list {
    int *arr_a;
    int *arr_b;
    int len_a;
    int len_b;
} list_t;

void my_algorithma(struct s_list *a, int argc);
void my_suit_algorithm(struct s_list *a, int argc);
int condition(struct s_list *a);
void my_alloc(struct s_list *a, int argc);
void my_algorithm(struct s_list *a);
void my_sa(struct s_list *a);
void my_pa(struct s_list *a, int);
int main(int argc, char **argv);
void my_pb(struct s_list *a);
int my_atoi(char const *str);
int *bubble_sort_array(int *array, int size);
int *convert(int argc, char **argv);
int my_put_nbr(int nb);
void my_putchar(char c);
void my_printf(char *s, ...);
int my_putstr(char const *str);
void my_ra(struct s_list *a);
void sort_array(int i, int *j, int *array, int size);
#endif
