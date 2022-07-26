/*
** EPITECH PROJECT, 2022
** malloc_struct.c
** File description:
** desc
*/

#include "defender.h"

void initialise(all_t *all)
{
    my_animation(all);
    malloc_all(all);
    my_spriting(all);
    all->elements->display_status = 0;
    sound_battle(all);
    ressources(all);
    my_texture(all);
    init_menu_sprites(all);
    initialise_allies(all);
    initialise_texts(all);
}

void initialise_allies(all_t *all)
{
    int nb = 20;
    int life = 100;
    int p_y = 900;
    int p_x_lower_turret = 1950;
    all->lower_turet->c_pos = 0;
    all->lower_turet->reset_c_pos = nb;
    all->lower_turet->clicked = 0;
    all->lower_turet->mul_pos = init_n_sprites(nb, p_x_lower_turret,p_y, life);
    all->the_tower->c_pos = 0;
    all->the_tower->reset_c_pos = nb;
    all->the_tower->clicked = 0;
    all->the_tower->mul_pos = init_n_sprites(nb, p_x_lower_turret, p_y, life);
    all->wall->c_pos = 0;
    all->wall->reset_c_pos = nb;
    all->wall->clicked = 0;
    all->wall->mul_pos = init_n_sprites(nb, p_x_lower_turret, p_y, life);
    all->elements->shooting = sfClock_create();
}

all_t *malloc_all(all_t *all)
{
    all->map = malloc(sizeof(map_t));
    all->elements = malloc(sizeof(elements_t));
    all->my_mouse = malloc(sizeof(my_mouse_t));
    all->lower_turet = malloc(sizeof(lower_turet_t));
    all->wall = malloc(sizeof(the_wall_t));
    all->the_tower = malloc(sizeof(the_tower_t));
    all->main_menu = malloc(sizeof(main_menu_t));
    all->button_menu = malloc(sizeof(button_menu_t));
    all->pause_menu = malloc(sizeof(pause_menu_t));
    all->allies = malloc(sizeof(allies_t));
    all->enemy->mul_pos = init_n_ennemies(20);
    all->path->mul_pos = get_path_coordinates(all->level_map, '-',
    all->path->dims);
    all->sound_clicked = malloc(sizeof(music_status_t));
    all->alien = malloc(sizeof(music_status_t));
    all->end_text = malloc(sizeof(all_text_t));
    return all;
}

void initialise_texts(all_t *all)
{
    all->end_text->victory = init_text("You have won!", 1, 90, sfWhite);
    all->end_text->death = init_text("You Loose!", 2, 90, sfWhite);
    all->end_text->money = init_text("Money: $", 2, 70, sfWhite);
    all->end_text->score = init_text("Points:", 2, 70, sfWhite);
    all->end_text->m_detail = init_text("0", 2, 70, sfWhite);
    all->end_text->s_detail = init_text("0", 2, 70, sfWhite);
    all->end_text->price_tony = init_text("Tony: $1000000", 2, 40, sfBlack);
    all->end_text->price_tower = init_text("Tower: $100000", 2, 40, sfBlack);
    all->end_text->price_turet = init_text("Turret: $10000", 2, 40, sfBlack);
    all->end_text->price_wall = init_text("Wall: $10000", 2, 40, sfBlack);
    all->end_text->c_money = 10000;
    all->end_text->c_score = 0;
    all->end_text->buffer = 0;
}
