#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to 0.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in the array.
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails or nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;
    
    if (nmemb == 0 || size == 0)
        return NULL;

    
    l = nmemb * size;
    p = malloc(l);

    if (p == NULL)
        return NULL;
    while (i < l)
    {
	    p[i] = 0;
	    i++;
    }
    return (p);
}

