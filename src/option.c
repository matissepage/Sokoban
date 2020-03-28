/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** option.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include <curses.h>
#include "../include/my.h"
#include "../include/my_sokoban.h"
#include "../lib/my/my_printf.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int option(void)
{
    my_printf("USAGE\n");
    my_printf("    ./my_sokoban map\n");
    my_printf("DESCRIPTION\n");
    my_printf("    map file representing the warehouse map, ");
    my_printf("containing ‘#’ for walls, \n");
    my_printf("       ‘P’ for the player, ‘X’ ");
    my_printf("for boxes and ‘O’ for storage locations.\n");
    return (0);
}

int inval(char c)
{
    if (c == '#')
        return 0;
    if (c == 'X')
        return 0;
    if (c == ' ')
        return 0;
    if (c == 'P')
        return 0;
    if (c == 'O')
        return 0;
    if (c == '\n')
        return 0;
    return 1;
}

int invalid_chara(char *str)
{
    int compteur_char_invalid = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (inval(str[i]) == 1) {
            my_printf("%s\n", "invalid map");
            exit (84);
        }
        i++;
    }
    return (compteur_char_invalid);
}

int kind_win(char **map)
{
    int compteur_pit = 0;
    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'O')
                compteur_pit++;
        }
    }
    return (compteur_pit);
}

int my_exit(int press)
{
    if (press == 32) {
        endwin();
        exit(0);
    }
    return (0);
}