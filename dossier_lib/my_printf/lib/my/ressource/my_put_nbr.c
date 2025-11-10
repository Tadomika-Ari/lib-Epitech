/*
** EPITECH PROJECT, 2025
** my put nbr
** File description:
** my put nbr
*/

#include "../my.h"

int my_put_nbr(int nb)
{
    char temp[11];
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    while (10 <= nb) {
        temp[i] = ('0' + nb % 10);
        nb = nb / 10;
        i++;
    }
    temp[i] = '\0';
    my_putchar('0' + nb);
    for (int el = 0; temp[el] != '\0'; el++) {
        my_putchar(temp[i - el - 1]);
    }
    return 0;
}
