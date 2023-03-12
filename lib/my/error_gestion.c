/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-quentin.charillon
** File description:
** error_gestion.c
*/

#include "libmy.h"

int put_other_that_number(char **argv)
{
    char *str = argv[1];
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0') || (str[i] > '9'))
            return (84);
    }
    return (0);
}

int put_other_that_poi_or_o(char **argv)
{
    char *str = argv[2];
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] != '.') & (str[i] != 'o' ))
            return (84);
    }
    return (0);
}

int bad_character(char *buffer)
{
    int x = 0;
    for (; buffer[x] != '\n'; x++);
    x++;
    for (; buffer[x] != '\0'; x++) {
        if (buffer[x] != '.' && buffer[x] != 'o' && buffer[x] != '\n') {
            return (84);
        }
    }
    return (0);
}
