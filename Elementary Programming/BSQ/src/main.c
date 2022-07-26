/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** BSQ main
*/

#include "bsq.h"

int error_handing(char const *filepath, int x, int size)
{
    int fd = open(filepath, O_RDONLY);
    char *buff = malloc(sizeof(char*) * x);
    buff[x + 1] = '\0';
    int ret = read(fd, buff, x);
    if (ret == -1) {
        return 1;
    }
    if (size == 0) {
        return 1;
    }
    return 0;
}

int columns(char *buffer)
{
    int columns = 0;

    for (int i = 0; buffer[i] != '\n'; i++) {
        columns = columns + 1;
    }
    return (columns + 1);
}

int rows(char *buffer)
{
    int rows = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n')
            rows = rows + 1;
    }
    return (rows);
}

int main(int argc, char **argv)
{
    char *buffer;
    char **map;
    int **im;
    int result;
    struct stat sb;
    stat(argv[1], &sb);
    int size = sb.st_size;
    int x = size;
    if (error_handing(argv[1], x, sb.st_size) == 1)
        return 84;
    buffer = open_and_read(argv[1]);
    im = stock_int_map(buffer, rows(buffer), columns(buffer));
    result = bsq(im, rows(buffer), columns(buffer));
    map = stock_char_map(buffer, rows(buffer), columns(buffer));
    square(map, geti(im, rows(buffer), columns(buffer), result),
    getj(im, rows(buffer), columns(buffer), result), result);
    for (int i = 0; map[i] != NULL; i++)
        my_putstr(map[i]);
    return (0);
}
