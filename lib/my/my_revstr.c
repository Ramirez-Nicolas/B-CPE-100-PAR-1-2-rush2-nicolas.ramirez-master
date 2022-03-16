/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** reverse a string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int size = my_strlen(str);
    char tmp;

    for (int i = 0, j = (size - 1); i != (size / 2)
            && j != 0; i++, j--) {
        tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
    }
    return (str);
}
