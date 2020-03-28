/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** flag3.c
*/

#include "my.h"
#include <stdarg.h>

void is_unsigned(va_list ap)
{
    my_putnbr_unsigned(va_arg(ap, unsigned int));
}