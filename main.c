/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** the main function
*/

#include "my.h"
#include <stddef.h>

int main(int ac, char **av)
{
    char const *str = av[1];
    int result = 0;
    float percentages = 0;

    if (ac <= 2)
        return (84);
    for (int i = 2; i < ac; i++) {
        result = counting_nbr_letters(str, av[i][0]);
        percentages = frequencies_letter(result, str);
        print_result(av[i][0], result, percentages);
    }
    return (0);
}
