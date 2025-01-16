#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *str;

	va_start(args, n);	/* Initialize the argument list */

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);	/* Retrieve each string */

		if (str == NULL)
			printf("(nil)");	/* Print (nil) if string is NULL */
		else
			printf("%s", str);	/* Print the string */

		/* Print separator if it's not the last string and separator is not NULL */
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);		/* Clean up the argument list */

	printf("\n");		/* Print a new line at the end */
}

