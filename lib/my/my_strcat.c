/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** concat a string into another
*/

#include <stddef.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int end_dest = my_strlen(dest);
    int i = 0;

    for (i; src[i] != '\0'; i++) {
        dest[end_dest + i] = src[i];
    }
    dest[end_dest + i] = '\0';
    return (dest);
}
