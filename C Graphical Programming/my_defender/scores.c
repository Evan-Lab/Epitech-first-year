/*
** EPITECH PROJECT, 2021
** my_defender - scores.c
** File description:
** jitter jitter
*/

#include "include/defender.h"

void draw_text(sfRenderWindow *window, text_t *text)
{
    sfRenderWindow_drawText(window, text->text, NULL);
}

void update_text(text_t *text, char *string)
{
    sfText_setString(text->text, string);
}

void move_text(text_t *my_text, int x, int y)
{
    sfVector2f position = {x, y};
    sfText_setPosition(my_text->text, position);
}

void free_text(text_t *my_text)
{
    sfText_destroy(my_text->text);
    sfFont_destroy(my_text->font);
}

void treat_scores(sfRenderWindow *window, all_t *all)
{
    char *money = nb_to_char_star(all->end_text->c_money);
    char *score = nb_to_char_star(all->end_text->c_score);
    update_text(all->end_text->m_detail, money);
    update_text(all->end_text->s_detail, score);
    move_n_show(window, all->end_text->score, 1405, 0);
    move_n_show(window, all->end_text->s_detail, 1695, 0);
    move_n_show(window, all->end_text->money, 1405, 50);
    move_n_show(window, all->end_text->m_detail, 1695, 50);
    move_n_show(window, all->end_text->price_wall, 1260, 940);
    move_n_show(window, all->end_text->price_tower, 1470, 970);
    move_n_show(window, all->end_text->price_turet, 1650, 920);
    move_n_show(window, all->end_text->price_tony, 1000, 900);
    free(money);
    free(score);
}
