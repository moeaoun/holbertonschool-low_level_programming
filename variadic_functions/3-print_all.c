#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything, followed by a new line
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    unsigned int i = 0;
    va_list args;
    char *str;
    char c;
    int n;
    float f;
    int first = 0;

    va_start(args, format);  /* Initialize the argument list */

    /* If format is NULL, just print a newline and return */
    if (format != NULL)
    {
        while (format[i] != '\0')
        {
            if (first)
                printf(", ");

            switch (format[i])
            {
            case 'c':
                c = va_arg(args, int);  /* 'char' is promoted to 'int' in va_arg */
                printf("%c", c);
                break;
            case 'i':
                n = va_arg(args, int);
                printf("%d", n);
                break;
            case 'f':
                f = va_arg(args, double);  /* 'float' is promoted to 'double' in va_arg */
                printf("%f", f);
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                break;
            default:
                i++;
                continue;
            }

            first = 1;
            i++;
        }
    }

    va_end(args);  /* Clean up the argument list */
    printf("\n");  /* Print a new line at the end */
}

