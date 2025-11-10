/*
** EPITECH PROJECT, 2025
** my strlen
** File description:
** my strlen
*/

int my_strlen(char const *str)
{
    int len = 0;

    for (int ch = 0; str[ch] != '\0'; ch++) {
        len++;
    }
    return len;
}
