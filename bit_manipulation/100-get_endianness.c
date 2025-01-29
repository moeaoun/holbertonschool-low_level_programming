#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    union {
        unsigned int num;
        unsigned char byte[4];
    } u;

    u.num = 1;  /* Set the integer value to 1 */

    /* If the first byte is 1, it's little endian, otherwise it's big endian */
    if (u.byte[0] == 1)
        return (1);  /* Little Endian */
    else
        return (0);  /* Big Endian */
}

