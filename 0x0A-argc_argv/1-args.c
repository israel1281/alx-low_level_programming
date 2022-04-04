#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments entered
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: print number of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
    printf("%s\n", argc - 1);
    argc =  argv;
    
    return (0);
}