/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-quentin.charillon
** File description:
** BSQ.c
*/

#include "libmy.h"

int nb_colonne(char *buffer)
{
    int nb_coll = 0;
    int nb_col = 0;
    for (; buffer[nb_coll] != '\n'; nb_coll++);
    char *nb_col1 = malloc(sizeof(char) * (nb_coll + 1));
    for (int i = 0; buffer[i] != '\n'; i++) {
        nb_col1[i] = buffer[i];
    }
    nb_col = my_getnbr(nb_col1);
    return (nb_col);
}

int affich_map(char **argv)
{
    int ch = 0;
    int error; struct stat stats;
    stat(argv[1], &stats);
    int size = stats.st_size;
    big_sq_t bigger_square = {0, 0, 0};
    char *buffer = malloc(size);
    int fd = open(argv[1], O_RDONLY);
    if (fd < 0)
        return (84);
    read(fd, buffer, size);
    if (size == 0)
        return 84;
    char **map = transform_buffer_to_2d(buffer, size);
    char **old_map = transform_buffer_to_2d(buffer, size);
    map_int(map, buffer);
    find_bigger_square(&bigger_square, map, buffer);
    put_x_for_square(old_map, &bigger_square);
    draw_map(old_map);
    return (0);
}

int gener_map(char **argv)
{
    int error;
    if ((error = put_other_that_number(argv)) == 84)
        return (84);
    if ((error = put_other_that_poi_or_o(argv)) == 84)
        return (84);
    big_sq_t bigger_square = {0, 0, 0};
    char **map = trans_buf_to_2d_gen(argv);
    char **old_map = trans_buf_to_2d_gen(argv);
    map_generate_int(map, argv);
    fi_bi_squ_ge_map(&bigger_square, map, argv);
    put_x_for_square_gen_map(old_map, &bigger_square);
    draw_map_generate(old_map);
    return (0);
}

int main(int argc, char **argv)
{
    int error;
    if (argc == 2) {
        if ((error = affich_map(argv)) == 84)
        return (84);
    } else if (argc == 3) {
        return (gener_map(argv));
    } else
        return (84);
}
