/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** returns the smallest number that is greater ,or equal to, the number given
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int result = 0;

    if (my_is_prime(nb) == 1)
        return (nb);
    if (my_is_prime(nb) == 0) {
        result = my_find_prime_sup(nb + 1);
    }
    return (result);
}
