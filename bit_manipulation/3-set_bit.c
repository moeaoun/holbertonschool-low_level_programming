#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number where the bit needs to be set.
 * @index: the index of the bit to set (starting from 0).
 *
 * Return: 1 if it worked, -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    /* Check if index is within the valid range for an unsigned long int */
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    /* Set the bit at the specified index to 1 using the bitwise OR operator */
    *n = *n | (1UL << index);

    return (1);
}

