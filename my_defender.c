/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** 
*/

#include "my_defender.h"

int main(int ac, char **av)
{
    if (error_handling(ac, av) == ERROR)
        return (84);
    my_defender(ac, av);
}