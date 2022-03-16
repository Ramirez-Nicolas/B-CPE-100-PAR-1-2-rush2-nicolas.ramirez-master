/*
** EPITECH PROJECT, 2020
** my_put_float.c
** File description:
** display float numbers$
*/

int my_put_nbr(int nb);
void my_putchar(char c);

int my_put_float(float nb)
{
    int cop_float = nb;
    int result = (nb *  100) - (cop_float * 100);

    my_put_nbr(nb);
    my_putchar('.');
    if (result / 10 == 0) {
        my_putchar('0');
        my_put_nbr(result);
    } else
        my_put_nbr(result);
    return (0);
}
