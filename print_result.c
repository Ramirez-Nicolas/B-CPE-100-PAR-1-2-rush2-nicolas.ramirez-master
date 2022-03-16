/*
** EPITECH PROJECT, 2020
** print_result.c
** File description:
** display the result
*/

#include "my.h"

void print_percentages(float percentages)
{
    my_putchar(' ');
    my_putchar('(');
    my_put_float(percentages);
    my_putchar('%');
    my_putchar(')');
}

void print_result(char letter, int result, float percentages)
{
    my_putchar(letter);
    my_putchar(':');
    my_put_nbr(result);
    print_percentages(percentages);
    my_putchar('\n');
}
