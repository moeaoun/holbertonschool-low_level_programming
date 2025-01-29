#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to evaluate.
 * @index: the index of the bit to get (starting from 0).
 *
 * Return: the value of the bit at index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /* Check if index is out of range */
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    /* Shift the bit at the desired index to the 0th position and check its value */
    return ((n >> index) & 1);
}

