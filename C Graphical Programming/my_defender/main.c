/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** desc
*/

#include "defender.h"

static void close_events_ovf(sfEvent event, all_t *all)
{
    if (event.key.code == sfKeyD)
        all->elements->display_status = 4;
    if (event.key.code == sfKeyV)
        all->elements->display_status = 3;
}

static void close_events(sfRenderWindow *window, sfEvent event, all_t *all)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed || all->elements->display_status == 84)
            sfRenderWindow_close(window);
        if (all->elements->display_status == 1
            && event.key.code == sfKeyEscape)
            all->elements->display_status = 2;
        close_events_ovf(event, all);
    }
}

void program(sfRenderWindow *window, sfEvent event, all_t *all)
{
    all->elements->limiter = sfClock_create();
    while (sfRenderWindow_isOpen(window)) {
        close_events(window, event, all);
        all->my_mouse->m_pos = sfMouse_getPositionRenderWindow(window);
        my_clock(window, all, all->elements->limiter);
        main_menu(window,  all);
        end_screen(window, all);
        display_pause_menu(window, all);
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfBlack);
    }
}

int main(int argc, char **argv)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};
    sfEvent event;
    all_t *all = malloc(sizeof(all_t));
    char *file_content;

    if (argc == 1)
        return 84;
    file_content = get_file_content(argv[1]);
    all->level_map = split(file_content, '\n');
    initialise(all);
    window = sfRenderWindow_create
        (video_mode, "my_defender", sfClose | sfResize, NULL);
    program(window, event, all);
    sfMusic_destroy(all->music);
    sfMusic_destroy(all->music_main);
    sfMusic_destroy(all->sound_clicked->music);
    sfMusic_destroy(all->alien->music);
    free_all_texts(all->end_text);
}
