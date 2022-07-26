/*
** EPITECH PROJECT, 2022
** mouse_effect.c
** File description:
** desc
*/

#include "defender.h"

int mouse_on_button(sfVector2i m_pos, sfIntRect rect)
{
    int x = m_pos.x;
    int y = m_pos.y;
    int x1 = rect.left;
    int x2 = rect.width + rect.left;
    int y1 = rect.top;
    int y2 = rect.height + rect.top;

    if ((x > x1 && x < x2) && (y > y1 && y < y2))
        return 1;
    return 0;
}

void mouse_effect(sfRenderWindow *window, all_t *all)
{
    sfIntRect rect;
    rect.left = 810;
    rect.top = 770;
    rect.width = 1200;
    rect.height = 870;
    sfSprite_setColor(all->button_menu->sprite_play, sfWhite);
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
        mouse_on_button(all->my_mouse->m_pos, rect) == 1) {
        sfMusic_pause(all->music_main);
        play_as_sound(all->sound_clicked);
        sfMusic_play(all->music_main);
        sfSprite_setColor(all->button_menu->sprite_play, sfCyan);
        all->sound_clicked->playing = 1;
        sfRenderWindow_close(window);
    }
    if (mouse_on_button(all->my_mouse->m_pos, rect) == 0)
        all->sound_clicked->playing = 0;
    if (mouse_on_button(all->my_mouse->m_pos, rect) == 1)
        sfSprite_setColor(all->button_menu->sprite_play, sfYellow);
}

void mousse_on_play(all_t *all)
{
    sfIntRect rect;
    rect.left = 800;
    rect.top =  630;
    rect.width = 300;
    rect.height = 50;
    sfSprite_setColor(all->button_menu->sprite_quit, sfWhite);
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
        mouse_on_button(all->my_mouse->m_pos, rect) == 1) {
        sfSprite_setColor(all->button_menu->sprite_quit, sfCyan);
        sfMusic_pause(all->music_main);
        play_as_sound(all->sound_clicked);
        sfMusic_play(all->music_main);
        all->sound_clicked->playing = 1;
        all->elements->display_status = 1;
    }
    if (mouse_on_button(all->my_mouse->m_pos, rect) == 0)
        all->sound_clicked->playing = 0;
    if (mouse_on_button(all->my_mouse->m_pos, rect) == 1)
        sfSprite_setColor(all->button_menu->sprite_quit, sfYellow);
}
