#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to print in reverse
 *
 * Description: This function prints each character of the string
 * starting from the last one, moving backward, and then prints a new line.
 */
void print_rev(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
while (len > 0)
{
len--;
_putchar(s[len]);
}
_putchar('\n');
}

