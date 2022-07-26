/*
** EPITECH PROJECT, 2021
** my_defender - sprite.h
** File description:
** jitter jitter
*/

#ifndef MY_SPRITE_H_
    #define MY_SPRITE_H_
    #include <SFML/Graphics.h>
    #include <SFML/System/Types.h>
    #include <SFML/System/Vector2.h>

typedef struct array_s {
    int *x;
    int *y;
    int *health;
} array_t;

typedef struct anim_s {
    int step_w;
    int step_h;
    int max_w;
    int max_h;
    int wrap;
    int delay;
    sfClock *sp_clock;
} anim_t;

typedef struct sprite_s {
    sfTexture *texture;
    sfSprite *sprite;
    anim_t anim;
    sfIntRect crop;
    sfVector2f dims;
    sfVector2f pos;
    array_t *mul_pos;
    int status;
    int offset;
} sprite_t;

typedef struct text_s {
    sfFont *font;
    sfText *text;
    sprite_t sprite;
    char *string;
    unsigned int font_size;
    sfColor fg;
    sfColor outline_color;
    float outline_thickness;
    float rotation;
    float letter_spacing;
    sfUint32 style;
    int x;
    int y;
    int status;
} text_t;

typedef struct all_text_s {
    text_t *victory;
    text_t *death;
    text_t *score;
    text_t *s_detail;
    text_t *money;
    text_t *m_detail;
    text_t *price_wall;
    text_t *price_tower;
    text_t *price_turet;
    text_t *price_tony;
    int c_score;
    int c_money;
    int buffer;
} all_text_t;

anim_t init_anim(sfVector2i step, sfVector2i max, sfBool wrap, int anim_delay);
sprite_t *init_sprite(char *img_path, anim_t anim_sp, sfIntRect crop,
sfVector2f size);
void next_frame(sprite_t *sp);
void move_sprite_w_struct(sprite_t *sp);
void move_sprite(sprite_t *sp, int x, int y);
void move_def_sprite(sfSprite *sp, int x, int y);
void display_sprite(sfRenderWindow *window, sprite_t *sp);
text_t *init_text(char *string, int my_font_choice, unsigned int font_size,
sfColor color);
void move_text(text_t *my_text, int x, int y);
void free_text(text_t *my_text);
void free_all_texts(all_text_t *texts);
void move_n_show(sfRenderWindow *window, text_t *text, int x, int y);
#endif
