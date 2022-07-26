/*
** EPITECH PROJECT, 2021
** my_defender - game_interaction.c
** File description:
** jitter jitter
*/

#include "defender.h"

int is_enemy_coliding_wall(all_t *all, int cur_en, the_wall_t *wall, int d)
{
    sprite_t *enemy = all->enemy;
    int e_x = enemy->mul_pos->x[cur_en];
    int e_y = enemy->mul_pos->y[cur_en];
    int e_w = e_x + enemy->dims.x;
    int e_h = e_y + enemy->dims.y;
    int i = 0;
    sfTime curr = sfClock_getElapsedTime(all->elements->shooting);
    for (; wall->mul_pos->x[i] != -2147483648; i++) {
        if (((wall->mul_pos->x[i] >= e_x &&
        wall->mul_pos->x[i] <= e_w) ||
        (wall->mul_pos->y[i] >= e_y &&
        wall->mul_pos->y[i] <= e_h)) && (enemy->mul_pos->health[i] > 0 &&
        wall->mul_pos->health[i] > 0) && curr.microseconds > 10000) {
            sfClock_restart(all->elements->shooting);
            wall->mul_pos->health[i] -= d;
            enemy->mul_pos->health[i] -= d;
            return sfTrue;
        }
    }
    return sfFalse;
}

void is_enemy_coliding_lower_turret(all_t *all, int curr_en,
lower_turet_t *lower_turret, int damage)
{
    sprite_t *enemy = all->enemy;
    int e_x = enemy->mul_pos->x[curr_en];
    int e_w = e_x + enemy->dims.x;
    int e_y = enemy->mul_pos->y[curr_en];
    int e_h = e_y + enemy->dims.y;
    int i = 0;
    sfTime curr = sfClock_getElapsedTime(all->elements->shooting);
    for (; lower_turret->mul_pos->x[i] != -2147483648; i++) {
        if (((lower_turret->mul_pos->x[i] >= e_x &&
        lower_turret->mul_pos->x[i] <= e_w) ||
        (lower_turret->mul_pos->y[i] >= e_y &&
        lower_turret->mul_pos->y[i] <= e_h)) &&
        (enemy->mul_pos->health[i] > 0 &&
        lower_turret->mul_pos->health[i] > 0) && curr.microseconds > 10000) {
            sfClock_restart(all->elements->shooting);
            lower_turret->mul_pos->health[i] -= damage;
            enemy->mul_pos->health[i] -= damage;
        }
    }
}

void update_friend_pos(sfRenderWindow *window, all_t *all)
{
    int i = 0;
    for (; all->the_tower->mul_pos->x[i] != -2147483648; i++) {
        move_def_sprite(all->the_tower->sprite_tower,
        all->the_tower->mul_pos->x[i], all->the_tower->mul_pos->y[i]);
        sfRenderWindow_drawSprite(window, all->the_tower->sprite_tower, NULL);
        move_def_sprite(all->wall->sprite_wall,
        all->wall->mul_pos->x[i], all->wall->mul_pos->y[i]);
        sfRenderWindow_drawSprite(window, all->wall->sprite_wall, NULL);
        move_def_sprite(all->lower_turet->sprite_lower_turet,
        all->lower_turet->mul_pos->x[i], all->lower_turet->mul_pos->y[i]);
        sfRenderWindow_drawSprite(window, all->lower_turet->sprite_lower_turet,
        NULL);
    }
}

void is_enemy_coliding_with_tower(all_t *all, int curr_en,
the_tower_t *tower, int damage)
{
    sprite_t *enemy = all->enemy;
    int e_x = enemy->mul_pos->x[curr_en];
    int e_w = e_x + enemy->dims.x;
    int e_y = enemy->mul_pos->y[curr_en];
    int e_h = e_y + enemy->dims.y;
    int i = 0;
    sfTime curr = sfClock_getElapsedTime(all->elements->shooting);
    for (; tower->mul_pos->x[i] != -2147483648; i++) {
        if (((tower->mul_pos->x[i] >= e_x &&
        tower->mul_pos->x[i] <= e_w) ||
        (tower->mul_pos->y[i] >= e_y &&
        tower->mul_pos->y[i] <= e_h)) && (enemy->mul_pos->health[i] > 0 &&
        tower->mul_pos->health[i] > 0) && curr.microseconds > 10000) {
            sfClock_restart(all->elements->shooting);
            tower->mul_pos->health[i] -= damage;
            enemy->mul_pos->health[i] -= damage;
        }
    }
}

void start_wave(sfRenderWindow *window, all_t *all)
{
    sfIntRect wave_rect = load_rect(all->launch_wave);
    sfVector2f scale = {1.5, 1.5};
    if (is_clicked(wave_rect, all, all->launch_wave) == sfTrue) {
        sfMusic_pause(all->music_main);
        play_as_sound(all->alien);
        sfMusic_play(all->music_main);
        all->launch_wave->anim.wrap = sfTrue;
    }
    move_sprite(all->launch_wave, 20, 800);
    sfSprite_setScale(all->launch_wave->sprite, scale);
    display_sprite(window, all->launch_wave);
    update_friend_pos(window, all);
}
