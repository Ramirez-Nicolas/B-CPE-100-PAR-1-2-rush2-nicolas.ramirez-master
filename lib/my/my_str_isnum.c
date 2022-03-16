/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** ...
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 0 && str[i] <= 47)
            return (0);
        if (str[i] >= 58 && str[i] <= 127)
            return (0);
    }
    return (1);
}
