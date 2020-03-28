/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my_error.c
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

int invalid_char(char **map)
{
    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] != 'P' || map[i][j] != ' '
                || map[i][j] != 'X' || map[i][j] != 'O' || map[i][j] != '#') {
                exit (84);
            }
        }
    }
}