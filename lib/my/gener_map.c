/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-quentin.charillon
** File description:
** gener_map.c
*/

#include "../../include/libmy.h"

int gen_map(char *pat, char *nb, vari_t  *vari)
{
    int n = my_getnbr(nb);
    if (pat[*vari->li] == '\0') {
        *vari->li = 0;
    }
    if (pat[*vari->li] == 'o' || pat[*vari->li] == '.') {
        my_putchar(pat[*vari->li]);
        (*vari->li)++;
        (*vari->i)++;
        if (*vari->i == n) {
            my_putchar('\n');
            (*vari->co)++;
            *vari->i = 0;
        }
    } else {
        return (84);
    }
    return (0);
}

int gener_map(char *nb, char *pat)
{
    int li = 0;
    int co = 0;
    int i = 0;
    int n = my_getnbr(nb);
    vari_t ss = { &i, &li, &co };
    while (i <= n && co < n) {
        if (gen_map(pat, nb, &ss) == 84) {
            return (84);
        }
    }
    return (0);
}
