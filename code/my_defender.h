/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** header 
*/

#ifndef MY_DEFENDER
    #define MY_DEFENDER

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <stdbool.h>

static const int ERROR = 84;
static const int SUCCESS = 0;
static const int WIDTH = 1280;
static const int HEIGHT = 720;
static const int BPP = 32;
static const int FPS = 50;

struct s_sprite
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
};
typedef struct s_sprite sprite_t;

struct s_animations
{
    sfImage *sheet;
    sprite_t sprite;
};
typedef struct s_animations animations_t;

struct s_images
{
    sprite_t *background;
    animations_t *animations;
};
typedef struct s_images images_t;

struct s_text
{
    char *to_display;
    sfFont *font;
    sfText *text;
    sfVector2f pos;
    unsigned int size;
    sfColor color;
};
typedef struct s_text text_t;

struct s_assets
{
    sfMusic *music;
    text_t text;
    images_t images;
};
typedef struct s_assets assets_t;

struct s_window
{
    sfRenderWindow *window;
    sfVideoMode mode;
};
typedef struct s_window window_t;

struct s_mydefender
{
    window_t window_t;
    sfEvent event;
    assets_t assets;
    sfClock *main_clock;
    bool in_game;
};
typedef struct s_mydefender my_defender_t;

void manage_events(my_defender_t *main_struct);
void launch(my_defender_t *main_struct);
void initialize(my_defender_t *main_struct);

#endif