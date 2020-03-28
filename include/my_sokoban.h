/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** bsq.h
*/

#ifndef MY_SOKOBAN_H_
#define MY_SOKOBAN_H_

#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include <curses.h>
#include "../include/my.h"
#include "../include/my_sokoban.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct position_s
{
    int x;
    int y;
}position_t;

typedef struct player_s
{
    int player_x;
    int player_y;
    int pos_last_x;
    int pos_last_y;
    int number_o;
    position_t *pos_o;
}player_t;

typedef struct case_s
{
    int case_x;
    int case_y;
}case_t;

typedef struct keyy_s
{
    int press;
}keyy_t;


int my_popup(char *str);
int option(void);
int fs_open_file(char const *filepath);
char **fs_read_file(struct stat *file_i, char const *filepath);
int my_sokoban(int ac, char **av);
int my_exit(int);
void get_player(char **map, player_t *player);
void up_down(char **map, player_t *player, int press);
void down(char **map, player_t *player, int press);
void left(char **map, player_t *player, int press);
void right(char **map, player_t *player, int press);
void moving(char **map, player_t *player, int press);
int move_case(char **map, player_t *player, case_t *box, int press);
void get_case(char **map, case_t *box);
void get_pit(char **map, player_t *player);
int block_corner(char **map, case_t *box, int press);
int kind_win(char **map);
int invalid_chara(char *str);
int inval(char c);
int pos_pit(char **map, player_t *player);
void draw_pit(char **map, player_t *player, int size);
void redraw(char **map, player_t *player, int i);

#endif /*MY_H*/