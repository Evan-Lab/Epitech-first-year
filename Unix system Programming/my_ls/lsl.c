/*
** EPITECH PROJECT, 2021
** lsl.c
** File description:
** desc
*/

#include "include/ls.h"

void source(struct stat s)
{
    if (S_ISREG(s.st_mode))
        my_printf("-");
    else if (S_ISDIR(s.st_mode))
        my_printf("d");
    else my_printf("l");
}

void temp(struct stat s)
{
    for (int i = 4; i != 16; i++)
        my_printf("%c", ctime(&s.st_ctime)[i]);
}

void others(struct stat s)
{
    struct passwd *c;
    struct group *b;
    c = getpwuid(s.st_uid);
    b = getgrgid(s.st_gid);

    my_printf(" %d", s.st_nlink);
    my_printf(" %s", c->pw_name);
    my_printf(" %s", b->gr_name);
    my_printf(" %d ", s.st_size);
}
