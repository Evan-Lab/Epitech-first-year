/*
** EPITECH PROJECT, 2021
** my_defender (Workspace)
** File description:
** pause_menu.c
*/

#include "defender.h"

void init_menu_sprites(all_t *all)
{
    sfIntRect crop = {0, 0, 450, 150};
    sfVector2f size = {450, 150};
    sfVector2i max = {450, 150};
    sfVector2i step = {0, 0};
    char *path = "ressources/resume.png";
    anim_t anim = init_anim(step, max, sfFalse, 0);
    all->pause_menu->resume_button = init_sprite(path, anim, crop, size);
    path = "ressources/leave_the_game.png";
    all->pause_menu->leave_game_button = init_sprite(path, anim, crop, size);
    path = "ressources/main_menu.png";
    all->pause_menu->main_menu_button = init_sprite(path, anim, crop, size);
    path = "ressources/start_wave.png";
    all->launch_wave = init_sprite(path, anim, crop, size);
    crop.width = 900;
    crop.height = 512;
    sfVector2f size2 = {900, 512};
    max.x = 900;
    max.y = 512;
    path = "ressources/pause_button.png";
    anim = init_anim(step, max, sfFalse, 0);
    all->pause_menu->bkg = init_sprite(path, anim, crop, size2);
}

int is_clicked(sfIntRect rect, all_t *all, sprite_t *sp)
{
    sfSprite_setColor(sp->sprite, sfWhite);
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
        mouse_on_button(all->my_mouse->m_pos, rect) == 1) {
        sfMusic_pause(all->music_main);
        play_as_sound(all->sound_clicked);
        sfMusic_play(all->music_main);
        all->sound_clicked->playing = 1;
        sfSprite_setColor(sp->sprite, sfCyan);
        return sfTrue;
    }
    if (mouse_on_button(all->my_mouse->m_pos, rect) == 0)
        all->sound_clicked->playing = 0;
    if (mouse_on_button(all->my_mouse->m_pos, rect) == 1)
        sfSprite_setColor(sp->sprite, sfYellow);
    return sfFalse;
}

sfIntRect load_rect(sprite_t *sp)
{
    sfIntRect close_rect;
    close_rect.left = sp->pos.x;
    close_rect.top = sp->pos.y;
    close_rect.height = close_rect.top + (int)sp->dims.y;
    close_rect.width = close_rect.left + (int)sp->dims.x;
    return close_rect;
}

void display_pause_menu(sfRenderWindow *window, all_t *all)
{
    if (all->elements->display_status == 2) {
        sfIntRect close_rect = load_rect(all->pause_menu->leave_game_button);
        sfIntRect menu_rect = load_rect(all->pause_menu->main_menu_button);
        sfIntRect res_rect = load_rect(all->pause_menu->resume_button);
        move_sprite(all->pause_menu->bkg, 550, 150);
        move_sprite(all->pause_menu->resume_button, 200, 650);
        move_sprite(all->pause_menu->main_menu_button, 1400, 650);
        move_sprite(all->pause_menu->leave_game_button, 800, 650);
        sfRenderWindow_drawSprite(window, all->map->my_sprite_map, NULL);
        display_sprite(window, all->pause_menu->bkg);
        display_sprite(window, all->pause_menu->resume_button);
        display_sprite(window, all->pause_menu->main_menu_button);
        display_sprite(window, all->pause_menu->leave_game_button);
        if (is_clicked(close_rect, all,
            all->pause_menu->leave_game_button) == sfTrue)
            all->elements->display_status = 84;
        if (is_clicked(menu_rect, all, all->pause_menu->main_menu_button) == 1)
            all->elements->display_status = 0;
        if (is_clicked(res_rect, all, all->pause_menu->resume_button)
            == sfTrue)
            all->elements->display_status = 1;
    }
}
