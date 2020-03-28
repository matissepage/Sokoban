/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** day04/task01
*/

int my_swap(int *a, int *b)
{
    int tmp = 0;

    tmp = *a;
    *a = *b;
    *b = tmp;
    return (0);
}

