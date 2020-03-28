/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** flag2.c
*/

#include "my.h"
#include <stdarg.h>

void is_octal(va_list ap)
{
    my_putnbr_base(va_arg(ap, int), "01234567");
}

void is_hex(va_list ap)
{
    my_putnbr_base(va_arg(ap, int), "0123456789abcdef");
}

void is_hexX(va_list ap)
{
    my_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
}

void is_binary(va_list ap)
{
    my_putnbr_base(va_arg(ap, int), "01");
}