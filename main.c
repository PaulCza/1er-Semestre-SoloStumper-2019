/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main of the hidenp project
*/

#include "my.h"

int helper(void)
{
    write(0, "Usage: ./hidenp needle haystack\n", 32);
    return 84;
}

int my_strlen(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a = a + 1;
    }
    return a;
}

int hidenp(char *needle, char *haystack)
{
    int len_n;
    int a = 0;
    int b = 0;

    len_n = my_strlen(needle);
    while (needle[a] != '\0' && haystack[b] != '\0') {
        if (needle[a] == haystack[b])
            a = a + 1;
        b = b + 1;
    }
    if (a == len_n)
        return 49;
    else
        return 48;
}
