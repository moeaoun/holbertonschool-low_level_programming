#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap the values of two integers
 * and update the value it points to 98
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
