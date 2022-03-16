/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** compare n characters from a string into another
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i != n; i++) {
        if ((s1[i] == '\0' && s1[i] != s1[n])
            && (s2[i] == '\0' && s2[i] != s2[n])) {
            return (0);
        }
        if (s1[i] > s2[i])
            return (s1[i] - s2[i]);
        if (s2[i] > s1[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}
