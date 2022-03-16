/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** copy n charaters from a string into another
*/

#include <stddef.h>

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (my_strlen(src) < n)
        dest[my_strlen(src)] = '\0';
    for (i; src[i] != src[n] && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return (dest);
}
