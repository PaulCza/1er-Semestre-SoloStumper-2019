/*
** EPITECH PROJECT, 2020
** true_main.c
** File description:
** true main
*/

#include "my.h"

int main(int argc, char *argv[])
{
    int a;

    if (argc == 3){
        a = hidenp(argv[1], argv[2]);
        my_putchar(a);
        my_putchar('\n');
        return 0;
    } else {
        helper();
        return 84;
    }
}
