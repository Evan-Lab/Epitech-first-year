/*
** EPITECH PROJECT, 2022
** take_map.c
** File description:
** desc
*/

#include "soko.h"

char *take_map(char const *filepath)
{
    struct stat size_file;
    stat(filepath, &size_file);
    int size = size_file.st_size;
    char *buffer = malloc(sizeof(char) * (size + 1));
    buffer[size] = '\0';
    int fd = open(filepath, O_RDONLY);
    read(fd, buffer, size);
    return buffer;
}
