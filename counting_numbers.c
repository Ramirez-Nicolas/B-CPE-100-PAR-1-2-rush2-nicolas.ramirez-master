/*
** EPITECH PROJECT, 2020
** counting_numbers.c
** File description:
** counting number of occurences of a letter
*/

#include "my.h"

int my_char_isalpha(char letter)
{
    if (letter >= 0 && letter <= 64)
        return (0);
    if (letter >= 91 && letter <= 96)
        return (0);
    if (letter >= 123 && letter <= 127)
        return (0);
    if (letter >= 'A' && letter <= 'Z')
        return (2);
    if (letter >= 'a' && letter <= 'z')
        return (1);
}

int count_letters(char const *str, char letter, int count)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == letter)
            count++;
        if (str[i] == letter - 32)
            count++;
    }
    return (count);
}

int counting_nbr_letters(char const *str, char letter)
{
    int count = 0;

    if (my_char_isalpha(letter) == 2)
        letter = letter + 32;
    if (my_char_isalpha(letter) == 1 || my_char_isalpha(letter) == 2) {
        count = count_letters(str, letter, count);
        return (count);
    } else
        return (0);
}
