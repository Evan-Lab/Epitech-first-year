/*
** EPITECH PROJECT, 2021
** my_defender - ennemy.c
** File description:
** jitter jitter - God has been here
*/

#include "defender.h"

array_t *init_n_ennemies(int nb)
{
    int i = 0;
    int buff = 0;
    array_t *ennemies = malloc(sizeof(my_mouse_t));

    ennemies->x = malloc(sizeof(int) * (nb + 1));
    ennemies->y = malloc(sizeof(int) * (nb + 1));
    ennemies->health = malloc(sizeof(int) * (nb + 1));
    ennemies->x[nb+1] = -2147483648;
    ennemies->y[nb+1] = -2147483648;
    ennemies->health[nb+1] = -2147483648;
    for (; i < nb + 1; i++) {
        buff = ((92 + (buff *- 1)) *- 1);
        ennemies->x[i] = buff;
        ennemies->y[i] = 200;
        ennemies->health[i] = 100;
    }
    return ennemies;
}

void increase_offset(all_t *all, int i, int enemy_index)
{
    sfTime c_time = sfClock_getElapsedTime(all->path->anim.sp_clock);
    int b = 0;
    if (all->enemy->offset >= i - 1) {
        all->enemy->offset = 0;
        for (; all->enemy->mul_pos->health[b] != -2147483648; b++) {
            all->enemy->mul_pos->health[b] = 100;
            all->wall->mul_pos->health[b] = 100;
            all->the_tower->mul_pos->health[b] = 100;
            all->lower_turet->mul_pos->health[b] = 100;
        }
        all->launch_wave->anim.wrap = sfFalse;
        all->end_text->c_money += 100;
    } if (c_time.microseconds >= 100000 &&
          is_enemy_coliding_wall(all, enemy_index, all->wall, 1) == sfFalse) {
        all->enemy->offset++;
        c_time = sfClock_restart(all->path->anim.sp_clock);
        all->end_text->buffer += 1000;
        all->end_text->c_score =
        all->end_text->c_money + all->end_text->buffer;
    }
}

void show_sprite_based_on_health(sfRenderWindow *win, all_t *all, int index)
{
    is_enemy_coliding_lower_turret(all, index, all->lower_turet, 10);
    is_enemy_coliding_with_tower(all, index, all->the_tower, 10);
    is_enemy_coliding_wall(all, index, all->wall, 10);
    if (all->enemy->mul_pos->health[index] > 0)
        display_sprite(win, all->enemy);
}

void show_ennemies(sfRenderWindow *window, all_t *all)
{
    int i = 0;
    int enemy_index = 0;

    for (; all->path->mul_pos->x[i] != -2147483648; i++) {
        if (all->enemy->mul_pos->x[enemy_index] != -2147483648 &&
        all->launch_wave->anim.wrap == sfTrue) {
            move_sprite(all->enemy,
            all->path->mul_pos->x[i+all->enemy->offset]+10,
            all->path->mul_pos->y[i+all->enemy->offset]
            -all->enemy->dims.y * 0.6);
            show_sprite_based_on_health(window, all, enemy_index);
            enemy_index++;
        } else
            start_wave(window, all);
        treat_scores(window, all);
    }
    increase_offset(all, i, enemy_index);
}
