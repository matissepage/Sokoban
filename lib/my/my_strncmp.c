/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** lib
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    while (n > 0 && s1[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        n -= 1;
        i += 1;
    }
    return (0);
}
