/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** tests_position_map.c
*/

#include <criterion/criterion.h>
#include "../include/my_sokoban.h"
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

Test(sokoban, check_player_position)
{
    player_t *position;
    struct stat *file_i;
    char **map;
    map = fs_read_file(&file_i, "map_tests_unit");
    get_player(map, position);

    cr_assert_neq(position, NULL);
    cr_assert_eq(position->player_x, 3);
    cr_assert_eq(position->player_y, 2);
}