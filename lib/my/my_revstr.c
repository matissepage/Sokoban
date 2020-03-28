/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** task03
*/

#include <unistd.h>

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int size;
    int i = 0;
    char dest;
    size = my_strlen(str) - 1;

    while (i < (my_strlen(str) / 2)) {
        dest = str[i];
        str[i] = str[size];
        str[size] = dest;
        i = i + 1;
        size = size - 1;
    }
    return (str);
}