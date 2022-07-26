/*
** EPITECH PROJECT, 2022
** game.c
** File description:
** desc
*/

#include "include/my_runner.h"

void elements(sfRenderWindow *window, all_t *all)
{
    parralax1(window, all);
    parralax2(window, all);
    parralax3(window, all);
    parralax4(window, all);
    parralax5(window, all);
    perso1(window, all);
    perso2(window, all);
    jump(all);
    display_score(window, all);
    collision(all);
}

void game(sfRenderWindow *window, sfEvent event, all_t *all)
{
    if (all->end == 0) {
        sfSprite_setTexture(all->sea->my_spritesea, all->sea->sea, sfFalse);
        sfRenderWindow_drawSprite(window, all->sea->my_spritesea, NULL);
        elements(window, all);
        if (event.type == sfEvtKeyPressed) {
            parajump(event, all);
            pararight(event, all);
            paraup(event, all);
            paradown(event, all);
        }
    }
    if (all->end == 1)
        game_over(window, all);
}
