/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    }
    for (; i < n; i++) {
    dest[i] = '\0';
    }
    return (dest);
}

