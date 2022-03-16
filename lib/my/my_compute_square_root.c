/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** return the square root of number
*/

int my_compute_square_root(int nb)
{
    int reach = 0;
    int result = 0;

    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);
    while (reach <= nb) {
        reach++;
        result = reach * reach;
        if (result == nb)
            return (reach);
    }
    return (0);
}
