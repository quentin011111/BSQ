/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-quentin.charillon
** File description:
** algorythme.c
*/

#include "libmy.h"
#include "struct.h"

void algo(int i, int j, char **map)
{
    if (map[i][j] == '.') {
        if (i == 1 || j == 0) {
            map[i][j] = 1;
            return;
        }
        to_fill_map_int(i, j, map);
        return;
    }
    map[i][j] = 0;
}

void to_fill_map_int(int i, int j, char **map)
{
    char nb = map[i - 1][j];
    if (nb > map[i - 1][j - 1])
        nb = map[i - 1][j - 1];
    if (nb > map[i][j - 1])
        nb = map[i][j - 1];
    map[i][j] = nb + 1;
}

void find_bigger_square(big_sq_t *bi_sq, char **map, char *buffer)
{
    int ch = 0;
    bi_sq->value = 0;
    int lig = nb_colonne(buffer);
    int col = 0;
    for (; buffer[ch] != '\n'; ch++);
    ch++;
    int taille = ch;
    for (; buffer[taille] != '\n'; taille++, col++);
    for (int i = 1; i < lig + 1; i++) {
        for (int j = 0; j < col; j++) {
            put_in_struct(map, i, j, bi_sq);
        }
    }
}

void put_in_struct(char **map, int i, int j, big_sq_t *bi_sq)
{
    if (map[i][j] > bi_sq->value) {
        bi_sq->value = map[i][j];
        bi_sq->pos_x = i;
        bi_sq->pos_y = j;
    }
}

void algo_map_generate(int i, int j, char **map)
{
    if (map[i][j] == '.') {
        if (i == 0 || j == 0) {
        map[i][j] = '1';
        return;
        }
        to_fill_map_int(i, j, map);
        return;
    }
    map[i][j] = '0';
}
