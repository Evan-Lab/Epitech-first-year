/*
** EPITECH PROJECT, 2021
** my_runner.h
** File description:
** framebuffer.h
*/

#ifndef RUNNER_H
    #define RUNNER_H
    #include "SFML/Graphics.h"
    #include <unistd.h>
    #include <SFML/Audio.h>
    #include <stdlib.h>

typedef struct sonic_s {
    sfSprite *my_spritep1;
    sfTexture *p1;
    sfSprite *my_spritep2;
    sfTexture *p2;
    sfSprite *my_spritep5;
    sfTexture *p5;
    sfVector2f my_posp;
    sfVector2f scalep;
} sonic_t;

typedef struct starting_s {
    sfTexture *my_texture_start;
    sfSprite *my_sprite_start;
    sfVector2f pos_start;
    sfVector2f scale_start;
} starting_t;

typedef struct city_s {
    sfTexture *my_texture_ville_fond20;
    sfSprite *my_sprite7;
    sfVector2f my_pos7;
    sfVector2f scale7;
    sfTexture *my_texture_ville_fond1;
    sfTexture *my_texture_city;
    sfSprite *my_sprite3;
    sfVector2f my_pos3;
    sfVector2f scale3;
    sfTexture *my_texture_city2;
    sfSprite *my_sprite6;
    sfVector2f my_pos6;
    sfVector2f scale6;
    sfTexture *my_texture_ville_fond200;
    sfSprite *my_sprite9;
    sfVector2f my_pos9;
    sfVector2f scale9;
} city_t;

typedef struct city_two_t {
    sfSprite *my_sprite2;
    sfTexture *my_texture_ville_fond2;
    sfSprite *my_sprite4;
    sfVector2f my_pos4;
    sfVector2f scale4;
    sfTexture *my_texture_back3;
    sfSprite *my_sprite5;
    sfVector2f my_pos5;
    sfVector2f scale5;
    sfVector2f my_pos2;
    sfVector2f scale2;
} city_two_t;

typedef struct sea_s {
    sfTexture *sea;
    sfSprite *my_spritesea;
    sfVector2f my_possea;
    sfVector2f scalesea;
} sea_t;

typedef struct spikes_s {
    sfTexture *spikes;
    sfSprite *my_sprite11;
    sfSprite *my_sprite12;
    sfVector2f my_pos11;
    sfVector2f scale11;
    sfVector2f my_pos12;
    sfVector2f scale12;
} spikes_t;

typedef struct clouds_s {
    sfSprite *my_sprite8;
    sfVector2f my_pos8;
    sfVector2f scale8;
    sfSprite *my_sprite1;
    sfTexture *my_texture_clouds;
    sfTexture *my_texture_clouds2;
    sfVector2f my_pos1;
    sfVector2f scale1;
} clouds_t;

typedef struct sky_s {
    sfTexture *my_texture_sky;
    sfSprite *my_sprite10;
    sfVector2f my_pos10;
    sfVector2f scale10;
} sky_t;

typedef struct game_over_s {
    sfTexture *my_texture_game_over;
    sfSprite *my_sprite_game_over;
    sfVector2f pos_game_over;
    sfVector2f scale_game_over;
} game_over_t;

typedef struct window_s {
    sfRenderWindow *window;
    sfEvent *event;
} window_t;

typedef struct all_s {
    sfMusic *music;
    sfFont *font;
    sfText *text;
    int step;
    int x;
    int my_jump;
    int end;
    int score;
    city_two_t *city_two;
    game_over_t *over;
    sky_t *sky;
    clouds_t *clouds;
    spikes_t *spikes;
    sea_t *sea;
    city_t *city;
    starting_t *start;
    sonic_t *sonic;
    window_t *window;
} all_t;

char *my_mem_number(int nb);
int my_strlen(char const *str);
char *my_strcat(char *, char const *);
void initialisation(all_t *all);
void initialisating(all_t *all);
void my_initialisation(all_t *all);
void initial_two(all_t *all);
void scaling_two_position(all_t *all);
void scaling_position(all_t *all);
void my_spriting(all_t *all);
void my_spriting_two(all_t *all);
void ressources(all_t *all);
void ressources_two(all_t *all);
void game_over(sfRenderWindow *window, all_t *all);
void paradown(sfEvent event, all_t *all);
void paraup(sfEvent event, all_t *all);
void pararight(sfEvent event, all_t *all);
void parajump(sfEvent event, all_t *all);
void perso2(sfRenderWindow *window, all_t *all);
void perso1(sfRenderWindow *window, all_t *all);
void init_score(all_t *all);
void display_score(sfRenderWindow *window, all_t *all);
void parralax5(sfRenderWindow *window, all_t *all);
void parralax4(sfRenderWindow *window, all_t *all);
void parralax3(sfRenderWindow *window, all_t *all);
void game(sfRenderWindow *window, sfEvent event, all_t *all);
void parralax1(sfRenderWindow *window, all_t *all);
void parralax2(sfRenderWindow *window, all_t *all);
void jump(all_t *all);
void collision(all_t *all);
void parra(sfRenderWindow *window, all_t *all);
void parralax2(sfRenderWindow *window, all_t *all);
void menu(sfRenderWindow *window, sfEvent event, all_t *all);
void sound(all_t *all);
void elements(sfRenderWindow *window, all_t *all);
void parralax_third(sfRenderWindow *window, all_t *all);
void parralax_four(sfRenderWindow *window, all_t *all);
void jump_two(all_t *all);
void help(all_t *all);
int my_putstr(char const *str);
void my_putchar(char c);
void wait(sfRenderWindow *window, sfEvent event, all_t *all);
int main(int argc, char **argv);
void program(sfRenderWindow *window, sfEvent event, all_t *all);
void init(all_t *all);
void display_text(sfRenderWindow *window, all_t *all);

#endif
