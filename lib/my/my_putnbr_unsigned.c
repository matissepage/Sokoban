/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_putnbr_unsigned.c
*/

void my_putchar(char c);
int my_put_nbr(int nb);

unsigned int my_putnbr_unsigned(unsigned int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
    my_putchar(48 + nb);
    }
    return (0);
}