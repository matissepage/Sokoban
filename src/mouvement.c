/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** mouvement.c
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

void up(char **map, player_t *player, int press)
{
    keypad(stdscr, TRUE);
    if (press == KEY_UP
        && map[player->player_y - 1][player->player_x] != '#') {
        if (map[player->player_y - 1][player->player_x] == 'X'
            && map[player->player_y - 2][player->player_x] != '#') {
            map[player->player_y - 2][player->player_x] = 'X';
            map[player->player_y][player->player_x] = ' ';
            map[player->player_y - 1][player->player_x] = 'P';
        } else if (map[player->player_y - 1][player->player_x] != 'X') {
            map[player->player_y][player->player_x] = ' ';
            map[player->player_y - 1][player->player_x] = 'P';
        }
    }
}

void down(char **map, player_t *player, int press)
{
    if (press == KEY_DOWN
        && map[player->player_y + 1][player->player_x] != '#') {
        if (map[player->player_y + 1][player->player_x] == 'X'
            && map[player->player_y + 2][player->player_x] != '#') {
            map[player->player_y + 2][player->player_x] = 'X';
            map[player->player_y][player->player_x] = ' ';
            map[player->player_y + 1][player->player_x] = 'P';
        } else if (map[player->player_y + 1][player->player_x] != 'X') {
            map[player->player_y][player->player_x] = ' ';
            map[player->player_y + 1][player->player_x] = 'P';
        }
    }
}

void left(char **map, player_t *player, int press)
{
    keypad(stdscr, TRUE);
    if (press == KEY_LEFT
        && map[player->player_y][player->player_x - 1] != '#') {
        if (map[player->player_y][player->player_x - 1] == 'X'
            && map[player->player_y][player->player_x - 2] != '#') {
            map[player->player_y][player->player_x - 2] = 'X';
            map[player->player_y][player->player_x] = ' ';
            map[player->player_y][player->player_x - 1] = 'P';
        } else if (map[player->player_y][player->player_x - 1] != 'X') {
            map[player->player_y][player->player_x] = ' ';
            map[player->player_y][player->player_x - 1] = 'P';
        }
    }
}

void right(char **map, player_t *player, int press)
{
    if (press == KEY_RIGHT
        && map[player->player_y][player->player_x + 1] != '#') {
        if (map[player->player_y][player->player_x + 1] == 'X'
            && map[player->player_y][player->player_x + 2] != '#') {
            map[player->player_y][player->player_x + 2] = 'X';
            map[player->player_y][player->player_x] = ' ';
            map[player->player_y][player->player_x + 1] = 'P';
        } else if (map[player->player_y][player->player_x + 1] != 'X') {
            map[player->player_y][player->player_x] = ' ';
            map[player->player_y][player->player_x + 1] = 'P';
        }
    }
}

void moving(char **map, player_t *player, int press)
{
    up(map, player, press);
    down(map, player, press);
    left(map, player, press);
    right(map, player, press);
    my_exit(press);
}