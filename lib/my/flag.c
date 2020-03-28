/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** flag
*/

#include "my.h"
#include <stdarg.h>

void is_number(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void is_str(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void is_char(va_list ap)
{
    my_putchar(va_arg(ap, int));
}