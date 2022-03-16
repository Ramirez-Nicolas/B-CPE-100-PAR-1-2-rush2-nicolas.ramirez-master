/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** compare two strings and return an int
*/

int my_strcmp(char const *s1, char const *s2)
{
    int count;

    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i + 1] == '\0' && s2[i + 1] != '\0')
            return (s1[i + 1] - s2[i + 1]);
        if (s1[i + 1] != '\0' && s2[i + 1] == '\0')
            return (s1[i + 1] - s2[i + 1]);
        if (s1[i] > s2[i]) {
            count = (s1[i] - s2[i]);
            return (count);
        }
        if (s2[i] > s1[i]) {
            count = (s2[i] - s1[i]) * -1;
            return (count);
        }
    }
    return (0);
}
