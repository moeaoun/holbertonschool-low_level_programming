#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog and its associated memory
 * @d: pointer to the dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the name and owner if they are not NULL */
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);

		/* Finally, free the dog structure */
		free(d);
	}
}

