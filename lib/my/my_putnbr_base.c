/*
** EPITECH PROJECT, 2019
** my
** File description:
** my_putnbr_base.c
*/

#include <unistd.h>

void my_putchar(char c);
int my_strlen(char const *str);

int my_putnbr_base(int n, char const *str)
{
    int len = my_strlen(str);

    if (n >= len) {
        my_putnbr_base(n / len, str);
    }
    n = n % len;
    my_putchar(str[n]);
    return (0);
}