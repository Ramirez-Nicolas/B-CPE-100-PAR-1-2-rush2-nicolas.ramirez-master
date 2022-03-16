/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** check if a number is prime or not
*/

int my_is_prime(int nb)
{
    int reach = 2;
    int result = 0;

    if (nb == 0 || nb == 1 || nb < 0)
        return (0);
    while (reach < nb) {
        result = nb % reach;
        if (result == 0) {
            return (0);
        }
        reach++;
    }
    return (1);
}
