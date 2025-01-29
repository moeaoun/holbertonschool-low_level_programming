#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string containing the binary number.
 *
 * Return: the converted number, or 0 if:
 *         - there is one or more chars in the string b that is not 0 or 1,
 *         - b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i;

    if (b == NULL) /* If the string is NULL */
        return (0);

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1') /* Check for invalid characters */
            return (0);

        result = result * 2 + (b[i] - '0'); /* Shift left and add current digit */
    }

    return (result);
}
                                                                                                                   
