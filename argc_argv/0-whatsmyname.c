#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    (void)argc;  // We don't need to use argc
    printf("%s\n", argv[0]);
    return (0);
}

