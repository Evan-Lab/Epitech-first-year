/*
** EPITECH PROJECT, 2022
** defender.h
** File description:
** desc
*/

#ifndef DEFENDER_H
    #define DEFENDER_H
    #include <fcntl.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include "my_sprite.h"
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio/Types.h>
    #include <SFML/System/Types.h>

typedef struct allies_s {
    sfTexture *texture_allies;
    sfSprite *sprite_allies;
    sfVector2f scale_allies;
    sfVector2f pos_allies;
} allies_t;

typedef struct pause_menu_s {
    sprite_t *resume_button;
    sprite_t *leave_game_button;
    sprite_t *main_menu_button;
    sprite_t *bkg;
} pause_menu_t;

typedef struct button_menu_s {
    sfTexture *texture_play;
    sfSprite *sprite_play;
    sfVector2f scale_play;
    sfVector2f pos_play;
    sfTexture *texture_quit;
    sfSprite *sprite_quit;
    sfVector2f scale_quit;
    sfVector2f pos_quit;
} button_menu_t;

typedef struct main_menu_s {
    sfTexture *texture_menu;
    sfSprite *sprite_menu;
    sfVector2f scale_menu;
    sfVector2f pos_menu;
} main_menu_t;

typedef struct the_tower_s {
    sfTexture *texture_tower;
    sfSprite *sprite_tower;
    sfVector2f scale_tower;
    sfVector2f pos_tower;
    array_t *mul_pos;
    int c_pos;
    int clicked;
    int reset_c_pos;
} the_tower_t;

typedef struct lower_turet_s {
    sfTexture *texture_lower_turet;
    sfSprite *sprite_lower_turet;
    sfVector2f scale_lower_turet;
    sfVector2f pos_lower_turet;
    array_t *mul_pos;
    int c_pos;
    int clicked;
    int reset_c_pos;
} lower_turet_t;

typedef struct the_wall_s {
    sfTexture *texture_wall;
    sfSprite *sprite_wall;
    sfVector2f pos_wall;
    sfVector2f scale_wall;
    array_t *mul_pos;
    int c_pos;
    int clicked;
    int reset_c_pos;
} the_wall_t;

typedef struct map_s {
    sfTexture *my_texture_map;
    sfSprite *my_sprite_map;
    sfVector2f pos_map;
    sfVector2f scale_map;
} map_t;

typedef struct elements_s {
    int display_status;
    sfClock *limiter;
    sfClock *shooting;
} elements_t;

typedef struct my_mouse_s {
    sfVector2i m_pos;
    int butt_left;
} my_mouse_t;

typedef struct music_status_s {
    char *path;
    sfMusic *music;
    int status;
    int playing;
    int was_played;
} music_status_t;

typedef struct all_s {
    sfMusic *music;
    sfMusic *music_main;
    music_status_t *sound_clicked;
    music_status_t *alien;
    map_t *map;
    my_mouse_t *my_mouse;
    elements_t *elements;
    sprite_t *enemy;
    sprite_t *path;
    char **level_map;
    lower_turet_t *lower_turet;
    the_tower_t *the_tower;
    the_wall_t *wall;
    main_menu_t *main_menu;
    button_menu_t *button_menu;
    pause_menu_t *pause_menu;
    sprite_t *launch_wave;
    all_text_t *end_text;
    allies_t *allies;
} all_t;

void ressources(all_t *all);
array_t *init_n_ennemies(int nb);
array_t *init_n_sprites(int nb, int pos_x, int pos_y, int health);
void initialise_allies(all_t *all);
char *get_file_content(char *filepath);
char **split(char *content, char symb);
array_t *get_path_coordinates(char **tab, char path_symb, sfVector2f dims);
void my_game(sfRenderWindow *window, all_t *all);
void my_spriting(all_t *all);
void my_menu(sfRenderWindow *window, sfEvent event, all_t *all);
void mousse_event(sfRenderWindow *window, all_t *all);
void my_animation(all_t *all);
void mouse_evt(sfEvent evt, all_t *all);
void initialise(all_t *all);
void is_in_box(my_mouse_t *mm, sprite_t *sp);
void show_ennemies(sfRenderWindow *window, all_t *all);
void show_path(sfRenderWindow *window, sprite_t *path);
void update_button(sfRenderWindow *window, my_mouse_t *mm, sprite_t *sp);
int my_strlen(char const *str);
char **str_to_word_array(char *str);
char *take_map(char const *filepath);
void mouse_effect(sfRenderWindow *window, all_t *all);
void the_tower(sfRenderWindow *window, all_t *all);
void sound_battle(all_t *all);
void the_tower_two(sfRenderWindow *window, all_t *all);
void the_wall(sfRenderWindow *window, all_t *all);
void main_menu(sfRenderWindow *window, all_t *all);
void my_clock(sfRenderWindow *window, all_t *all,
sfClock *limiter);
void button_menu(sfRenderWindow *window, all_t *all);
void my_texture(all_t *all);
void button_play(sfRenderWindow *window, all_t *all);
void mousse_on_play(all_t *all);
void pause_menu(sfRenderWindow *window, sfEvent event, all_t *all);
void display_pause_menu(sfRenderWindow *window, all_t *all);
void init_menu_sprites(all_t *all);
int mouse_on_button(sfVector2i m_pos, sfIntRect rect);
int is_clicked(sfIntRect rect, all_t *all, sprite_t *sp);
void load_music(music_status_t *music, int loop);
void play_as_sound(music_status_t *music);
void is_enemy_coliding_with_tower(all_t *all, int curr_en,
the_tower_t *tower, int damage);
void is_enemy_coliding_lower_turret(all_t *all, int curr_en,
lower_turet_t *lower_turret, int damage);
int is_enemy_coliding_wall(all_t *all, int cur_en, the_wall_t *wal, int d);
sfIntRect init_friend_sfintrect(sfSprite *sp);
sfIntRect load_rect(sprite_t *sp);
int is_chosen(sfIntRect rect, all_t *all, sfSprite *sp);
void place_wall(all_t *all);
void place_the_tower(all_t *all);
void place_lower_turret(all_t *all);
void update_friend_pos(sfRenderWindow *window, all_t *all);
void start_wave(sfRenderWindow *window, all_t *all);
void initialise_texts(all_t *all);
void treat_scores(sfRenderWindow *window, all_t *all);
char *nb_to_char_star(int nb);
void draw_text(sfRenderWindow *window, text_t *text);
void end_screen(sfRenderWindow *window, all_t *all);
void my_tony(sfRenderWindow *window, all_t *all);
all_t *malloc_all(all_t *all);
#endif
