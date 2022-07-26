/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** desc
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *my_strcat(char *dest, char const *src)
{
    int buffer = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[buffer + i] = src[i];
        i++;
    }
    dest[buffer + i] = '\0';
    return (dest);
}
