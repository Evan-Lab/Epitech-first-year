/*
** EPITECH PROJECT, 2021
** help.c
** File description:
** desc
*/

#include "../include/my.h"

void help()
{
    my_putstr("USAGE\n");
    my_putstr("   ./103cipher message key flag\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("   message  ");
    my_putstr("   a message, made of ASCII characters\n");
    my_putstr("   key         the encryption");
    my_putstr("key, made of ASCII characters\n");
    my_putstr("   flag        0 for the message");
    my_putstr(" to be encrypted, 1 to be decrypted\n");
}
