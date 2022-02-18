/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** 
*/

#include "my_defender.h"

void initialize_window(window_t *window_t)
{
    sfVideoMode mode = {WIDTH, HEIGHT, BPP};

    window_t->mode = mode;
    window_t->window = sfRenderWindow_create(mode, "my_defender", sfDefaultStyle, NULL);
}

void initialize(my_defender_t *main_struct)
{
    initialize_window(&main_struct->window_t);
    main_struct->main_clock = sfClock_create();
    sfRenderWindow_setFramerateLimit(main_struct->window_t.window, FPS);
}