#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits needed to flip, or 0 if no bits need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_result;
    unsigned int bit_count = 0;

    /* XOR the two numbers to find the differing bits */
    xor_result = n ^ m;

    /* Count the number of 1s in the result */
    while (xor_result)
    {
        bit_count += xor_result & 1;  /* Increment if the lowest bit is 1 */
        xor_result >>= 1;  /* Shift right to check the next bit */
    }

    return (bit_count);
}

