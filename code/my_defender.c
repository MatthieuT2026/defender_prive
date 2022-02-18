/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** 
*/

#include "my_defender.h"

void my_defender(int ac, char **av)
{
    my_defender_t base_struct;

    initialize(&base_struct);
    launch(&base_struct);
}

int main(int ac, char **av)
{
    //if (error_handling(ac, av) == ERROR)
    //    return (84);
    my_defender(ac, av);
}