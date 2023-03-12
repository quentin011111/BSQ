/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-quentin.charillon
** File description:
** draw_map.c
*/

#include "libmy.h"
#include "struct.h"

void put_x_for_square(char **map, big_sq_t *bigger_square)
{
    int pos_x = bigger_square->pos_x;
    int pos_y = bigger_square->pos_y;
    for (int i = pos_x; i > pos_x - bigger_square->value; i--) {
        for (int j = pos_y; j > pos_y - bigger_square->value; j--) {
            map[i][j] = 'x';
        }
    }
}

void put_x_for_square_gen_map(char **map, big_sq_t *bigger_square)
{
    int pos_x = bigger_square->pos_x;
    int pos_y = bigger_square->pos_y;
    for (int i = pos_x; i > pos_x - (bigger_square->value - 48); i--) {
        for (int j = pos_y; j > pos_y - (bigger_square->value - 48); j--) {
            map[i][j] = 'x';
        }
    }
}

void draw_map(char **map)
{
    for (int i = 1; map[i] != NULL; i++) {
        write(1, map[i], my_strlen(map[i]));
        my_putchar('\n');
    }
}

void draw_map_generate(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        write(1, map[i], my_strlen(map[i]));
        my_putchar('\n');
    }
}

void fi_bi_squ_ge_map(big_sq_t *bi_sq, char **map, char **argv)
{
    bi_sq->value = 0;
    int cols = my_getnbr(argv[1]);
    int lig = cols;
    for (int i = 0; i < lig; i++) {
        for (int j = 0; j < cols; j++) {
            put_in_struct(map, i, j, bi_sq);
        }
    }
}
