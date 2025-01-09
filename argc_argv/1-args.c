#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    (void)argv;  // We don't need to use argv
    printf("%d\n", argc - 1);  // argc includes the program name, so subtract 1
    return (0);
}

