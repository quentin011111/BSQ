/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-quentin.charillon
** File description:
** map_2d.c
*/

#include "libmy.h"

int cha;

void put_ch_0(char argv)
{
    if (argv == '\0')
        cha = 0;
}

char **transform_buffer_to_2d(char *buffer, int size)
{
    int ch = 0;
    char **map = malloc(sizeof(char *) * (size + 1));
    int nb_lig = nb_colonne(buffer);
    int nb_col = 0;
    for (; buffer[ch] != '\n'; ch++);
    ch++;
    int taille = ch;
    for (; buffer[taille] != '\n'; taille++, nb_col++);
    for (int i = 1; i < nb_lig + 1; i++) {
        map[i] = malloc(sizeof(char) * (nb_col + 1));
        for (int j = 0; j < nb_col; j++) {
            map[i][j] = buffer[ch];
            ch++;
        }
        ch++;
    }
    return (map);
}

char **trans_buf_to_2d_gen(char **argv)
{
    cha = 0;
    int nb_lig = my_getnbr(argv[1]);
    int nb_col = nb_lig;
    char **map = malloc(sizeof(char*) * (nb_lig + 1));
    for (int i = 0; i < nb_lig; i++) {
        map[i] = malloc(sizeof(char) * (nb_col + 1));
        for (int j = 0; j < nb_col; j++) {
            map[i][j] = argv[2][cha];
            cha++;
            put_ch_0(argv[2][cha]);
        }
    }
    return (map);
}

int map_int(char **map, char *buffer)
{
    int ch = 0;
    int nb_col = 0;
    int nb_lig = nb_colonne(buffer);
    for (; buffer[ch] != '\n'; ch++);
    ch++;
    int taille = ch;
    for (; buffer[taille] != '\n'; taille++, nb_col++);
    for (int i = 1; i < nb_lig + 1; i++) {
        for (int j = 0; j < nb_col; j++) {
            algo(i, j, map);
        }
    }
    return (0);
}

void map_generate_int(char **map, char **argv)
{
    int nb_lig = my_getnbr(argv[1]);
    int nb_col = nb_lig;
    for (int i = 0; i < nb_lig; i++) {
        for (int j = 0; j < nb_col; j++) {
            algo_map_generate(i, j, map);
        }
    }
}
