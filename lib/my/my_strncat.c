/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** concat n characters from a string into another
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int end_dest = my_strlen(dest);
    int i = 0;

    for (i; src[i] != src[nb] && src[i] != '\0'; i++) {
        dest[end_dest + i] = src[i];
    }
    dest[end_dest + i] = '\0';
    return (dest);
}
