#include <stdio.h>
#include "function_pointers.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Hodor", print_name_uppercase);  /* Pass function pointer */
    print_name("Hodor", NULL);  /* Pass NULL to check for graceful handling */
    printf("\n");
    return (0);
}

