#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments entered
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: print all arguments including file name
 * Return: 0
 */

int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
        printf("%s\n", argv[i]);
    argc = argc;
    return (0);
}