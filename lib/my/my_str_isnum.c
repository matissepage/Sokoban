/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** lib
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' && str[i] > '9') {
            return (0);
        } else {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}