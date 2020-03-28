/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** lib
*/

void my_putchar(char c);
int my_putstr(char const *str);

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (0);
    }
    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
        my_put_nbr(nb);
        return (1);
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
    my_putchar(48 + nb);
    }
    return (0);
}