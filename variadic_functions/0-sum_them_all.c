#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up all the parameters passed to the function
 * @n: the number of arguments
 *
 * Return: the sum of all the parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    int sum = 0;

    va_start(args, n);  /* Initialize the argument list */

    for (i = 0; i < n; i++)
    {
        sum += va_arg(args, int);  /* Access each argument */
    }

    va_end(args);  /* Clean up */

    return (n == 0 ? 0 : sum);  /* Return sum or 0 if no arguments */
}

