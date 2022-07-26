/*
** EPITECH PROJECT, 2021
** stars.c
** File description:
** desc
*/

#include "../include/framebuffer.h"

void stars(framebuffer_t *framebuffer)
{
    my_put_pixel_two(framebuffer, rand() %1920, rand() %1080);
    my_put_pixel_two(framebuffer, rand() %1920, rand() %1080);
}
