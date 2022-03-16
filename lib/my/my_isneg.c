/*
** EPITECH PROJECT, 2020
** my_isneg.c
** File description:
** display all integer with his sign
*/

#include <unistd.h>

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
        my_putchar('\n');
    } else {
        my_putchar('N');
        my_putchar('\n');
    }
    return (0);
}
