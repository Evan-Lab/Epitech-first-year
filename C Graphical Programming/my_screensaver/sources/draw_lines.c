/*
** EPITECH PROJECT, 2021
** draw_lines
** File description:
** desc
*/

#include "../include/framebuffer.h"

void stars(framebuffer_t *framebuffer)
{
    my_put_pixel_two(framebuffer, rand() %1920, rand() %1080);
    my_put_pixel_one(framebuffer, rand() %1920, rand() %1080);
    my_put_pixel_three(framebuffer, rand() %1920, rand() %1080);
}

void my_line_two(framebuffer_t *framebuffer, int x, int y)
{
    while (x != 10000) {
        if (y >= 1080)
            y = 0;
        my_put_pixel_one(framebuffer, x, y);
        y++;
        x++;
    }
}

void my_line(framebuffer_t *framebuffer, int x, int y)
{
    while (x != 10000) {
        if (y >= 1080)
            y = 0;
        my_put_pixel_three(framebuffer, x, y);
        y++;
        x++;
    }
    my_line_two(framebuffer, x, y);
}
