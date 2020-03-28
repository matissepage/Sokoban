/*
** EPITECH PROJECT, 2019
** my_str_isalha.c
** File description:
** lib
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < 'a' && str[i] > 'z') || (str[i] < 'A' && str[i] > 'Z')) {
            return (0);
        } else {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}