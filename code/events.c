/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** 
*/

#include "my_defender.h"

void manage_events(my_defender_t *main_struct)
{
    while (sfRenderWindow_pollEvent(main_struct->window_t.window, &main_struct->event)) {
        if (main_struct->event.type == sfEvtClosed ||
            (main_struct->event.type == sfEvtKeyPressed && main_struct->event.key.code == sfKeyEscape)) {
            //clean_all_ressources(main_struct);
             sfRenderWindow_close(main_struct->window_t.window);
        }
    }
}