/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** count the number of chars in a string
*/

int my_strlen(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return (count);
}
