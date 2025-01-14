#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: Always 0 on success.
 */
int main(int argc, char *argv[])
{
    int num_bytes, i;
    unsigned char *ptr;

    // Check if the number of arguments is incorrect
    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    // Convert the argument to an integer (number of bytes)
    num_bytes = atoi(argv[1]);

    // Check if the number of bytes is negative
    if (num_bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    // Set ptr to point to the address of main
    ptr = (unsigned char *)main;

    // Print the opcodes in hexadecimal
    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x", ptr[i]);

        // Print a space between opcodes except for the last one
        if (i < num_bytes - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}

