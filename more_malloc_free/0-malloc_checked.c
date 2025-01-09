#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * malloc_checked - Allocates memory using malloc and handles failure.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the program terminates with status value 98.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);  

    if (ptr == NULL) 
    {
        exit(98);  
    }

    return ptr;  
}

