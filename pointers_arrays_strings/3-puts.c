#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string to print
 *
 * Description: This function prints a given string character by character
 * using the _putchar function and then prints a new line.
 * If the string is empty, it simply prints a new line.
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}

