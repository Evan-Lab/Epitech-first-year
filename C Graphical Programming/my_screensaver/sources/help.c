/*
** EPITECH PROJECT, 2021
** info.c
** File description:
** desc
*/

#include "../include/framebuffer.h"

void second_info(void)
{
    my_putstr("1: horizontal lines crossing the window at random height.\n");
    my_putstr("2: circles moving in the window");
    my_putstr("and bouncing when touches a border.\n");
    my_putstr("3: cicles appaering and fading out one after the other.\n");
    my_putstr("...\n");
    my_putstr("20: starry sky animation");
    my_putstr("(stars going in and out and whose ");
    my_putstr("speed depends on their size)\n");
}

void info(void)
{
    my_putstr("animation rendering in a CSFML window.\n");
    my_putstr("\n");
    my_putstr("USAGE\n");
    my_putstr("\n");
    my_putstr(" ./my_screensaver  [OPTION] animation_id.\n");
    my_putstr("  animaton_id   ID of the animation to process \
(between 1 and 20).");
    my_putstr("\n");
    my_putstr("\n");
    my_putstr("OPTIONS\n");
    my_putstr("  -d          printf the description of all");
    my_putstr("the animation and quit.\n");
    my_putstr("  -h          printf the usage and quit.\n");
    my_putstr("\n");
    my_putstr("USER INTERACTION\n");
    my_putstr("  LEFT_ARROW      switch to the previous animation.\n");
    my_putstr("  RIGHT_ARROW     switch to the next animation.\n");
}
