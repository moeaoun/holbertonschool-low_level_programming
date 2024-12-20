#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: the string to print
 * Description: This function prints the second half of a string.
 * If the string has an odd length, it prints the last n characters,
 * where n = (length_of_string - 1) / 2.
 */
void puts_half(char *str)
{
int len = 0;
int start; 
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
start = len / 2;
}
else
{
start = (len / 2) + 1;
}
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}

