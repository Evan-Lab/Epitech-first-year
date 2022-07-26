/*
** EPITECH PROJECT, 2021
** desc
** File description:
** desc
*/

#include "../include/framebuffer.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));

    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(width * height * 4);
    return framebuffer;
}

void framebuffer_destroy(framebuffer_t *framebuffer)
{
    free(framebuffer->pixels);
    free(framebuffer);
}

void my_put_pixel_two(framebuffer_t *framebuffer, unsigned int x,
unsigned int y)
{
    framebuffer->pixels[0 + 4 * (y * framebuffer->width + x)] = 255;
    framebuffer->pixels[1 + 4 * (y * framebuffer->width + x)] = 255;
    framebuffer->pixels[2 + 4 * (y * framebuffer->width + x)] = 255;
    framebuffer->pixels[3 + 4 * (y * framebuffer->width + x)] = 255;
}
