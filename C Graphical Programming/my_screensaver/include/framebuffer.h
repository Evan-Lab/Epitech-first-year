/*
** EPITECH PROJECT, 2021
** framebuffer.h
** File description:
** framebuffer.h
*/

#ifndef FRAME_H_
    #define FRAME_H_
    #include "SFML/Graphics.h"
    #include "SFML/Audio.h"
    #include <stdlib.h>
    #include <ncurses.h>
    #include <string.h>
    #include <unistd.h>

struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
};

typedef struct framebuffer framebuffer_t;
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void my_put_pixel_one(framebuffer_t *framebuffer, unsigned int x,
unsigned int y);
void my_put_pixel_two(framebuffer_t *framebuffer, unsigned int x,
unsigned int y);
void my_line(framebuffer_t *framebuffer, int x, int y);
void my_second_line(framebuffer_t *framebuffer, int x, int y);
void stars(framebuffer_t *framebuffer);
framebuffer_t *random_lines (framebuffer_t *image);
sfColor my_rgba(sfUint8 r, sfUint8 g, sfUint8 b, sfUint8 a);
void my_putchar(char c);
int my_putstr(char const *str);
void info(void);
void second_info(void);
int add(void);
int main(int argc, char **argv);
void my_put_pixel_three(framebuffer_t *framebuffer, unsigned int x,
unsigned int y);
void fix(framebuffer_t *framebuffer,
sfRenderWindow* window, sfTexture* texture, sfSprite* sprite);
void screen(framebuffer_t *framebuffer,
sfRenderWindow* window, sfTexture* texture, sfSprite* sprite);
void my_line_two(framebuffer_t *framebuffer, int x, int y);
void events(sfRenderWindow *window, sfEvent event);
#endif
