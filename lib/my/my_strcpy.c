/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** copies a strig into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (i; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
