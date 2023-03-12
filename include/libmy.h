/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** libmy.h
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <ncurses.h>
#include "struct.h"

#ifndef MYPRINT_H_
    #define MYPRINT_H_

void my_putchar(char c);
double my_abs(double x);
int my_putstr(char const *str);
int my_find (char a);
void my_putnbr(int nb);
int my_strlen(char const *str);
long convert_octal(long dec);
int my_putnbr_long(long nbr, char *base);
void my_putnbr_long_unsigned(unsigned long nbr, char *base);
void my_putfloat(float f);
void hexa_convertor(long dec_nbr);
int check_nsignd(unsigned int a);
char my_non_printable_str(char const *str);
void convertor_binaire(unsigned long int a);
void hexa_convertor_up(int dec_nbr);
int my_getnbr(char const *str);
void cond1(const char *format, int i, va_list list);
void cond2(const char *format, int i, va_list list);
void cond3(const char *format, int i, va_list list);
void cond4(const char *format, int i, va_list list);
void my_printf( const char * format , ...);
int nb_colonne(char *buffer);
char **transform_buffer_to_2d(char *buffer, int size);
char **trans_buf_to_2d_gen(char **argv);
int map_int(char **map, char *buffer);
void map_generate_int(char **map, char **argv);
void algo(int i, int j, char **map);
void to_fill_map_int(int i, int j, char **map);
void draw_map(char **map);
void find_bigger_square(big_sq_t *bi_sq, char **map, char *buffer);
void fi_bi_squ_ge_map(big_sq_t *bi_sq, char **map, char **argv);
void put_x_for_square(char **map, big_sq_t *bigger_square);
void put_x_for_square_gen_map(char **map, big_sq_t *bigger_square);
void put_in_struct(char **map, int i, int j, big_sq_t *bi_sq);
void draw_map_generate(char **map);
void algo_map_generate(int i, int j, char **map);
int put_other_that_number(char **argv);
void put_ch_0(char argv);
int put_other_that_poi_or_o(char **argv);
int bad_character(char *buffer);

#endif /* MYPRINT_H_ */
