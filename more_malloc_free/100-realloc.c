#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int i;
    char *old_data, *new_data;

    if (new_size == old_size)
        return ptr;

    if (ptr == NULL)
        return malloc(new_size);

    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return NULL;

    old_data = (char *)ptr;
    new_data = (char *)new_ptr;

    for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
        new_data[i] = old_data[i];

    free(ptr);
    return new_ptr;
}

