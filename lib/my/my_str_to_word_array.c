/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** returns a number given in a string as an int
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int my_char_is_alpha(char c)
{
    if (c == '#')
        return (1);
    if (c == 'P' || c == ' ')
        return (1);
    if (c == 'X' || c == 'O')
        return (1);
    return (0);
}

int my_count_word(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (my_char_is_alpha(str[i]) == 0 && my_char_is_alpha(str[i + 1]) == 1)
            count += 1;
        i += 1;
    }
    count += 1;
    return (count);
}

int my_count_char(char *str, int i)
{
    int compteur = 0;

    while (my_char_is_alpha(str[i]) == 1) {
            compteur = compteur + 1;
            i += 1;
    }
    return (compteur);
}

int converteur(char *str, char *dest, int index)
{
    int j = 0;

    while (my_char_is_alpha(str[index]) == 1) {
        dest[j] = str[index];
        j++;
        index++;
    }
    dest[j] = '\0';
    return (index);
}

char **my_str_to_word_array(char *str)
{
    int size = my_strlen(str);
    char **tab = NULL;
    int i = 0;
    int count_word = my_count_word(str);
    int count_char = 0;
    int k = 0;
    tab = malloc(sizeof(*tab) * count_word + 1);

    while (i < size) {
        if (my_char_is_alpha(str[i]) == 1) {
            count_char = my_count_char(str, i);
            tab[k] = malloc(sizeof(*tab[k]) * count_char + 1);
            i = converteur(str, tab[k], i);
            k++;
        }
        i++;
    }
    tab[k] = NULL;
    return (tab);
}