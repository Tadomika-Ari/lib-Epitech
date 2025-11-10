/*
** EPITECH PROJECT, 2025
** my get nbr
** File description:
** my get nbr
*/

#include "../my.h"
#include <stdlib.h>

int my_getnbr(char const *str)
{
    int num = 0;
    int in_num = 1;
    char *num_start;
    int index = 0;
    int ch;

    num_start = malloc((my_strlen(str) + 1) * sizeof(char));
    for (ch = 0; str[ch] != '\0' && in_num == 1; ch++) {
        if (!my_isdigit(str[ch]))
            in_num = 0;
        if (my_isdigit(str[ch])) {
            num_start[index] = str[ch];
            index++;
        }
    }
    num_start[index] = '\0';
    num = my_strtoint(num_start, index);
    return num;
}
