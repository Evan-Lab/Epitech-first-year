/*
** EPITECH PROJECT, 2021
** open.c
** File description:
** desc
*/

#include "../include/framebuffer.h"

void events(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
}

void screen(framebuffer_t *framebuffer,
sfRenderWindow *window, sfTexture *texture, sfSprite *sprite)
{
    sfEvent event;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
            events(window, event);
        my_line(framebuffer, 0, 0);
        stars(framebuffer);
        sfSprite_setTexture(sprite, texture, sfTrue);
        sfTexture_updateFromPixels(texture,
        framebuffer->pixels, 1920, 1080, 0, 0);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
}

int add(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    framebuffer_t *framebuffer;

    window = sfRenderWindow_create(mode, "my_screensaver"
    , sfResize | sfClose, NULL);
    framebuffer = framebuffer_create(1920, 1080);
    texture = sfTexture_create(1920, 1080);
    sprite = sfSprite_create();
    sfRenderWindow_setFramerateLimit(window, 30);
    screen(framebuffer, window, texture, sprite);
    return 0;
}

void four_main(int argc, char **argv)
{
    if (argc == 2)
        if (argv[1][0] == '-' && argv[1][1] == 'd')
            second_info();
}

void five_main(int argc, char **argv)
{
    if (argc == 2)
        if (argv[1][0] == '-' && argv[1][1] == 'h')
            info();
}

int main(int argc, char **argv)
{
    five_main(argc, argv);
    four_main(argc, argv);
    if (argc == 1)
        add();
    return 0;
}
