/*
** EPITECH PROJECT, 2022
** open_maps.c
** File description:
** desc
*/

#include "bsq.h"

char *open_and_read(char const *filepath)
{
    struct stat sb;
    int fd = open(filepath, O_RDONLY);
    int ret = stat(filepath, &sb);
    int buff_size = sb.st_size;
    int i = 0;
    char *buff = malloc(sizeof(char *) * buff_size);;
    char *buffer = malloc(sizeof(char *) * buff_size);;
    read(fd, buff, buff_size);

    while (buff[i] != '\n')
        i++;
    i++;
    for (int j = 0; buff[i] != '\0'; i++) {
        buffer[j] = buff[i];
        j++;
    }
    close(fd);
    return buffer;
}
