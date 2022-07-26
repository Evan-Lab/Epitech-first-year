/*
** EPITECH PROJECT, 2021
** my_screensaver_three.C
** File description:
** desc
*/

#include "../include/framebuffer.h"

void my_put_pixel_one(framebuffer_t *framebuffer, unsigned int x,
unsigned int y)
{
    framebuffer->pixels[0 + 4 * (y * framebuffer->width + x)] = 255;
    framebuffer->pixels[1 + 4 * (y * framebuffer->width + x)] = 0;
    framebuffer->pixels[2 + 4 * (y * framebuffer->width + x)] = 0;
    framebuffer->pixels[3 + 4 * (y * framebuffer->width + x)] = 255;
}

void my_put_pixel_three(framebuffer_t *framebuffer, unsigned int x,
unsigned int y)
{
    framebuffer->pixels[0 + 4 * (y * framebuffer->width + x)] = 0;
    framebuffer->pixels[1 + 4 * (y * framebuffer->width + x)] = 255;
    framebuffer->pixels[2 + 4 * (y * framebuffer->width + x)] = 71;
    framebuffer->pixels[3 + 4 * (y * framebuffer->width + x)] = 255;
}
