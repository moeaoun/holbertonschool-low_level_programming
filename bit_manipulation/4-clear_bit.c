#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number where the bit needs to be cleared.
 * @index: the index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    /* Check if index is within the valid range for an unsigned long int */
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    /* Clear the bit at the specified index to 0 using the bitwise AND operator */
    *n = *n & ~(1UL << index);

    return (1);
}

