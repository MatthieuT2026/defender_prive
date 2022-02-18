/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** 
*/

#include "my_defender.h"

void launch(my_defender_t *main_struct)
{    
    while (sfRenderWindow_isOpen(main_struct->window_t.window)) {
        manage_events(main_struct);
        //set_new_frames(main_struct);
        sfRenderWindow_display(main_struct->window_t.window);
        sfRenderWindow_clear(main_struct->window_t.window, sfBlack);
    }
}