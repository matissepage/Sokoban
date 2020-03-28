/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** tests_option.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include "../include/my_sokoban.h"
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include <curses.h>
#include "../include/my.h"
#include "../lib/my/my_printf.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// Test(my_error, exit_code, .exit_code = 84)
// {
//     char **av;
//     main(1, av);
// }