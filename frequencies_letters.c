/*
** EPITECH PROJECT, 2020
** frequencies_letters.c
** File description:
** calculate the frequencies of letters
*/

#include "my.h"

int count_nb_letters(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (my_char_isalpha(str[i]) == 1 || my_char_isalpha(str[i]) == 2)
            count++;
    }
    return (count);
}

float frequencies_letter(float nb_letters, char const *str)
{
    float result = 0;
    int size_str = my_strlen(str);
    
    result = (nb_letters * 100) / count_nb_letters(str);
    return (result);
}
