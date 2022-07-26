/*
** EPITECH PROJECT, 2021
** first_window.c
** File description:
** desc
*/

#include "include/my_runner.h"

all_t *space_all(all_t *all)
{
    all->over = malloc(sizeof(game_over_t));
    all->sky = malloc(sizeof(sky_t));
    all->clouds = malloc(sizeof(clouds_t));
    all->spikes = malloc(sizeof(spikes_t));
    all->sea = malloc(sizeof(sea_t));
    all->city = malloc(sizeof(city_t));
    all->sonic = malloc(sizeof(sonic_t));
    all->start = malloc(sizeof(starting_t));
    all->city_two = malloc(sizeof(city_two_t));
    return all;
}

void scalling(all_t *all)
{
    all->step = 0;
    all->my_jump = 0;
    all->x = 0;
    all->end = 0;
    all->score = 0;
    space_all(all);
    init_score(all);
    sound(all);
    ressources(all);
    my_spriting(all);
    scaling_position(all);
    initialisation(all);
}

void events(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (event.key.code == sfKeyEscape)
        sfRenderWindow_close(window);
}

void program(sfRenderWindow *window, sfEvent event, all_t *all)
{
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
            events(window, event);
        sfRenderWindow_setFramerateLimit(window, 500);
        menu(window, event, all);
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfBlue);
    }
    sfMusic_destroy(all->music);
}

int main(int argc, char **argv)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};
    sfEvent event;
    argv = argv;
    all_t *all = malloc(sizeof(all_t));

    scalling(all);
    window = sfRenderWindow_create
        (video_mode, "my_runner", sfClose | sfResize, NULL);
    if (argc == 1)
        sfMusic_destroy(all->music);
    if (argc == 2)
        program(window, event, all);
}
