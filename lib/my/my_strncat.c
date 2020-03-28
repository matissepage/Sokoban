/*
** EPITECH PROJECT, 2019
** my_strncate
** File description:
** lib
*/

char *my_strncat(char *dest, char const *str, int nb)
{
    int i = 0;
    int size = 0;

    while (dest[size] != '\0') {
        size++;
    }
    while (str[i] != '\0' && i < nb) {
        dest[size + i] = str[i];
        i++;
    }
    dest[size + i] = '\0';
    return (0);
}