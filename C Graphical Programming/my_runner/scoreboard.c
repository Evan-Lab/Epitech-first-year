/*
** EPITECH PROJECT, 2022
** scoreboard.c
** File description:
** desc
*/

#include "include/my_runner.h"

void init(all_t *all)
{
    sfVector2f pos;
    pos.x = 1625;
    pos.y = 0;
    all->font = sfFont_createFromFile("ressources/sonic_police.ttf");
    all->text = sfText_create();
    sfText_setFont(all->text, all->font);
    sfText_setPosition(all->text, pos);
    sfText_setCharacterSize(all->text, 40);
    sfText_setColor(all->text, sfBlack);
}

void display_text(sfRenderWindow *window, all_t *all)
{
    char *text = my_mem_number(all->score);
    char *text_display = malloc(sizeof(char) *
    (7 + my_strlen(text + 1)));
    text_display[0] = '\0';
    my_strcat(text_display, " Press 0\nto start");
    sfText_setString(all->text, text_display);
    sfRenderWindow_drawText(window, all->text, NULL);

}

void init_score(all_t *all)
{
    sfVector2f postext;
    postext.x = 1625;
    postext.y = 0;
    all->font = sfFont_createFromFile("ressources/sonic_police.ttf");
    all->text = sfText_create();
    sfText_setFont(all->text, all->font);
    sfText_setPosition(all->text, postext);
    sfText_setCharacterSize(all->text, 40);
    sfText_setColor(all->text, sfBlack);
}

void display_score(sfRenderWindow *window, all_t *all)
{
    char *score_value = my_mem_number(all->score);
    char *text_display = malloc(sizeof(char) *
    (7 + my_strlen(score_value + 1)));
    text_display[0] = '\0';
    my_strcat(text_display, "score: ");
    my_strcat(text_display, score_value);
    sfText_setString(all->text, text_display);
    sfRenderWindow_drawText(window, all->text, NULL);
}
