/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** same task as task04 but in recursive
*/

int my_compute_power_rec(int nb, int p)
{
    int result = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    if (p >= 1) {
        result = result * my_compute_power_rec(nb, p -= 1);
    }
    return (result);
}
