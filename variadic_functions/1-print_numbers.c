#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list args;

    va_start(args, n);  /* Initialize the argument list */

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int));  /* Print each number */

        if (i != n - 1 && separator != NULL)
        {
            printf("%s", separator);  /* Print separator if not the last number and separator is not NULL */
        }
    }

    va_end(args);  /* Clean up the argument list */

    printf("\n");  /* Print a new line at the end */
}

