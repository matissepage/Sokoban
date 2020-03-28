/*
** EPITECH PROJECT, 2019
** PSU_my_printf_bootstrap_2019
** File description:
** my_printf.h
*/

#ifndef MY_PRINTF_H
#define MY_PRINTF_H

#include <stdarg.h>

void my_control(char c, va_list ap);
void my_printf(char *str, ...);
void is_number(va_list ap);
void is_str(va_list ap);
void is_char(va_list ap);
void is_octal(va_list ap);
void is_hex(va_list ap);
void is_hexX(va_list ap);
void is_unsigned(va_list ap);
void is_binary(va_list ap);

typedef struct array_fct {
    char c;
    void (*fct)(va_list);
}array;

static array fct_tab[] = {
    {'d', is_number},
    {'s', is_str},
    {'c', is_char},
    {'i', is_number},
    {'o', is_octal},
    {'x', is_hex},
    {'X', is_hexX},
    {'u', is_unsigned},
    {'b', is_binary},

};

#endif /*MY_PRINTF_H*/