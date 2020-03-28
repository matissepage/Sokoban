/*
** EPITECH PROJECT, 2019
** PSU_my_popup_2019
** File description:
** my_popup.c
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

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        my_putstr("FAILURE\n");
        exit (84);
    } else {
        return (fd);
    }
    return (0);
}

char **fs_read_file(struct stat *file_i, char const *filepath)
{
    int fd = fs_open_file(filepath);
    stat(filepath, file_i);
    int size = file_i->st_size;
    char *buffer;
    buffer = malloc(sizeof(char) * size);
    read(fd, buffer, size);
    invalid_chara(buffer);
    char **tab = my_str_to_word_array(buffer);
    return (tab);
}

int my_popup(char *str)
{
    struct stat file_info;
    char **tab = fs_read_file(&file_info, str);
    int press = 0;
    player_t player1;
    case_t box;
    keyy_t key;
    initscr();
    noecho();
    curs_set(0);
    get_pit(tab, &player1);

    while (1) {
        clear();
        for (int i = 0; tab[i]; i += 1) {
            redraw(tab, &player1, i);
            mvprintw(i, 0, "%s", tab[i]);
        }
        get_player(tab, &player1);
        press = getch();
        moving(tab, &player1, press);
        if (kind_win(tab) == 0) {
            endwin();
            return (0);
        }
        refresh();
    }
    endwin();
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 2) {
        my_putstr("Please, enter a one file\n");
        return (84);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        option();
        return (0);
    } else {
        my_popup(av[1]);
    }
}