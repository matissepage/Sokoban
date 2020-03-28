/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** lib
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 33 || str[i] > 126) {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}