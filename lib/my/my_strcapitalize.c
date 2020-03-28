/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** lib
*/

char *my_strcapitalize(char *str)
{
    int i = 1;

    if (str[0] >= 97 && str[0] <= 122) {
        str[0] = str[0] - 32;
    }
    while (str[i] != '\0') {
        if ((str[i] >= '!' && str[i] <= '/') || str[i] < 64) {
            if (str[i + 1] > 'a' && str[i + 1] < 'z') {
                str[i + 1] = str[i + 1] - 32;
            }
        }
        i = i + 1;
    }
    return (str);
}