/*
** EPITECH PROJECT, 2020
** my_show_word_array.c
** File description:
** display the content of an array word
*/

#include <stddef.h>

int my_putstr(char const *str);
void my_putchar(char c);

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}
