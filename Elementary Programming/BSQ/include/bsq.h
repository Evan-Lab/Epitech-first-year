/*
** EPITECH PROJECT, 2021
** bsq.h
** File description:
** desc
*/

#ifndef BSQ_H_
    #define BSQ_H_
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_getnbr(char *str);
char *open_and_read(char const *filepath);
int columns(char *buffer);
int rows(char *buffer);
int min(int **im, int i, int j);
char **mem_alloc_2d_char_array(int rows, int columns);
char **stock_map(char *buffer, int rows, int columns);
char **fill_char_map(char **map, int rows, int columns);
int bsq(int **im, int rows, int columns);
int **mem_alloc_2d_int_array(int rows, int columns);
int **stock_int_map(char *buffer, int rows, int columns);
char **stock_char_map(char *buffer, int rows, int columns);
int geti(int **im, int rows, int columns, int result);
int getj(int **im, int rows, int columns, int result);
void square(char **map, int i, int j, int result);
char *open_and_read(char const *filepath);

#endif
