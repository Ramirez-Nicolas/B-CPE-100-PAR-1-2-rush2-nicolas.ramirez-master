/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** swap two integers whose adrresses are given as a paramater
*/

void my_swap(int *a, int *b)
{
    int tmp = 0;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
