/*
** EPITECH PROJECT, 2025
** my putstr
** File description:
** my putstr
*/

#include "../my.h"

int my_putstr(char const *str)
{
    int ch;

    for (ch = 0; ch < my_strlen(str); ch++) {
        my_putchar(str[ch]);
    }
    return 0;
}
