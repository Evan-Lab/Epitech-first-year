/*
** EPITECH PROJECT, 2022
** sound.c
** File description:
** desc
*/

#include "defender.h"

void sound_battle(all_t *all)
{
    if (all->elements->display_status == 0) {
        all->music_main = sfMusic_createFromFile
            ("ressources/main_trimmed.ogg");
        sfMusic_setLoop(all->music_main, sfTrue);
        sfMusic_play(all->music_main);
    }
    all->sound_clicked->path = "ressources/button_click.ogg";
    load_music(all->sound_clicked, sfFalse);
    all->alien->path = "ressources/alien.ogg";
    load_music(all->alien, sfFalse);
}

void load_music(music_status_t *music, int loop)
{
    music->music = sfMusic_createFromFile(music->path);
    if (loop == sfTrue)
        sfMusic_setLoop(music->music, sfTrue);
    else
        sfMusic_setLoop(music->music, sfFalse);
    music->playing = 0;
    music->status = 0;
    music->was_played = 0;
}

void play_as_sound(music_status_t *music)
{
    if (music->playing == 0) {
        sfTime m_offset;
        music->playing = 0;
        music->was_played++;
        m_offset = sfMusic_getPlayingOffset(music->music);
        m_offset.microseconds = m_offset.microseconds - m_offset.microseconds;
        sfMusic_setPlayingOffset(music->music, m_offset);
        sfMusic_play(music->music);
    }
}

void free_music(music_status_t music)
{
    sfMusic_destroy(music.music);
}
