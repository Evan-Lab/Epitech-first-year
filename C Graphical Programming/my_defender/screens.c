/*
** EPITECH PROJECT, 2021
** my_defender - screens.c
** File description:
** jitter jitter
*/

#include "include/defender.h"

char *font_choice(int my_choice)
{
    char *glasoor_ff_four_f = "ressources/police_type_glassor.ttf";
    char *goodfish_rg = "ressources/goodfish_rg.ttf";
    if (my_choice == 1)
        return goodfish_rg;
    else if (my_choice == 2)
        return glasoor_ff_four_f;
    else
        return goodfish_rg;
}

text_t *init_text(char *string, int my_font_choice, unsigned int font_size,
sfColor color)
{
    text_t *my_text = malloc(sizeof(text_t));
    my_text->font = sfFont_createFromFile(font_choice(my_font_choice));
    my_text->text = sfText_create();
    sfText_setString(my_text->text, string);
    sfText_setFillColor(my_text->text, color);
    sfText_setFont(my_text->text, my_text->font);
    sfText_setCharacterSize(my_text->text, font_size);
    my_text->font_size = font_size;
    my_text->string = string;
    my_text->x = 0;
    my_text->y = 0;
    my_text->status = 0;
    return my_text;

}

void end_screen(sfRenderWindow *window, all_t *all)
{
    sfIntRect menu_rect = load_rect(all->pause_menu->main_menu_button);
    if (all->elements->display_status == 3) {
        move_text(all->end_text->victory, 700, 300);
        draw_text(window, all->end_text->victory);
        move_sprite(all->pause_menu->main_menu_button, 700, 500);
        display_sprite(window, all->pause_menu->main_menu_button);
        if (is_clicked(menu_rect, all, all->pause_menu->main_menu_button) == 1)
            all->elements->display_status = 0;
    } if (all->elements->display_status == 4) {
        move_text(all->end_text->death, 700, 300);
        draw_text(window, all->end_text->death);
        move_sprite(all->pause_menu->main_menu_button, 700, 500);
        display_sprite(window, all->pause_menu->main_menu_button);
        if (is_clicked(menu_rect, all, all->pause_menu->main_menu_button) == 1)
            all->elements->display_status = 0;
    }
}

void free_all_texts(all_text_t *texts)
{
    free_text(texts->death);
    free_text(texts->score);
    free_text(texts->money);
    free_text(texts->victory);
    free_text(texts->s_detail);
    free_text(texts->m_detail);
    free_text(texts->price_tony);
    free_text(texts->price_wall);
    free_text(texts->price_tower);
    free_text(texts->price_turet);
}

void move_n_show(sfRenderWindow *window, text_t *text, int x, int y)
{
    move_text(text, x, y);
    draw_text(window, text);
}
