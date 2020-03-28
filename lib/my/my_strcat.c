/*
** EPITECH PROJECT, 2019
** my_strcate
** File description:
** lib
*/

char *my_strcat(char *dest, char const *str)
{
    int i = 0;
    int size = 0;

    while (dest[size] != '\0') {
        size++;
    }
    while (str[i] != '\0') {
        dest[size + i] = str[i];
        i++;
    }
    dest[size + i] = '\0';
    return (dest);
}