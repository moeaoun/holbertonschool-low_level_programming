#include "3-calc.h"

/**
 * op_add - returns the sum of a and b.
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - returns the result of division of a by b.
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of division of a by b.
 *         If b is 0, prints "Error" and exits with status 100.
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/**
 * op_mod - returns the remainder of division of a by b.
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of division of a by b.
 *         If b is 0, prints "Error" and exits with status 100.
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}

