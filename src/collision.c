/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** collision.c
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

void get_case(char **map, case_t *box)
{
    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'X') {
                box->case_x = j;
                box->case_y = i;
            }
        }
    }
}

void get_pit(char **map, player_t *player)
{
    int compteur = 0;
    player->number_o = kind_win(map);

    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'O') {
                player->pos_o[compteur].y = i;
                player->pos_o[compteur].x = j;
                compteur++;
            }
        }
    }
}

void redraw(char **map, player_t *player, int i)
{
    for (int j = 0; map[i][j] != '\0'; j++) {
        for (int k = 0; k < 2; k++) {
            if (i == player->pos_o[k].y && j == player->pos_o[k].x) {
                if (map[i][j] == ' ') {
                    map[i][j] = 'O';
                }
            }
        }
    }
}

void get_player(char **map, player_t *player)
{
    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'P') {
                player->player_x = j;
                player->player_y = i;
            }
        }
    }
    player->pos_o = malloc(sizeof(position_t) * (player->number_o));
}