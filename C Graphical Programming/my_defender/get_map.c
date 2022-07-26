/*
** EPITECH PROJECT, 2021
** my_defender - get_map.c
** File description:
** jitter jitter
*/

#include "defender.h"

char *get_file_content(char *filepath)
{
    int result = open(filepath, O_RDONLY);
    int nb_chars_to_read = 30000;
    char *content_of_file = malloc(sizeof(char) * nb_chars_to_read + 1);
    char *temp = content_of_file;

    if (result != -1) {
        read(result, content_of_file, nb_chars_to_read);
        temp[nb_chars_to_read + 1] = '\0';
        return temp;
    } else
        return (char *)84;
}

int nb_lines(char *content, char sep)
{
    int i = 0;
    int len = 0;
    for (; content[i] != '\0'; i++) {
        if (content[i] == sep)
            len++;
    }
    return len;
}

int get_line_length(char *content, int lines_to_skip)
{
    int count = 0;
    int i = 0;
    int line_index = 0;
    for (; content[i] != '\0'; i++) {
        if (content[i] == '\n' && line_index < lines_to_skip) {
            line_index++;
            count = 0;
        } if (content[i] == '\n' && line_index == lines_to_skip)
            return count;
        count++;
    }
    return count;
}

char **split(char *content, char symb)
{
    int x = 0;
    int y = 0;
    int i = 0;
    char **tab = malloc(sizeof(char *) * nb_lines(content, symb));
    tab[0] = malloc(sizeof(char) * my_strlen(content));

    for (; content[i] != '\0'; i++) {
        if (content[i] == symb) {
            tab[y][x] = '\0';
            x = 0;
            y++;
            i++;
            tab[y] = malloc(sizeof(char) * my_strlen(content));
        }
        tab[y][x] = content[i];
        x++;
    }
    tab[y] = NULL;
    return tab;
}
