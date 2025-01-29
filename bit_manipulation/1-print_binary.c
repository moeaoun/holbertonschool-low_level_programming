#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be printed in binary.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);  /* Recursively shift right to print higher bits */

    _putchar((n & 1) + '0');  /* Print the current bit (either 0 or 1) */
}

