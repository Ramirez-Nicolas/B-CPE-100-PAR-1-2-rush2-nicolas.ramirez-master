/*
** EPITECH PROJECT, 2020
** my_str_is_alpha.c
** File description:
** check if a string contains only alphabetical characters
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 0 && str[i] <= 64)
            return (0);
        if (str[i] >= 91 && str[i] <= 96)
            return (0);
        if (str[i] >= 123 && str[i] <= 127)
            return (0);
    }
    return (1);
}
