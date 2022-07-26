/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** desc
*/

#include "ls.h"

int main(int argc, char **argv)
{
    int a = 0;

    a += flag_l(argc, argv, a);
    a += flag(argc, argv, a);
    a = flag_a(argc, argv, a);
    return 0;
}
