#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to the new dog (dog_t), or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int name_len, owner_len;

    /* Allocate memory for the dog_t struct */
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    /* Get lengths of name and owner */
    name_len = strlen(name) + 1;
    owner_len = strlen(owner) + 1;

    /* Allocate memory for the name and owner strings */
    dog->name = malloc(name_len * sizeof(char));
    dog->owner = malloc(owner_len * sizeof(char));

    /* Check if memory allocation for name or owner fails */
    if (dog->name == NULL || dog->owner == NULL)
    {
        /* Free previously allocated memory and return NULL */
        free(dog->name);
        free(dog->owner);
        free(dog);
        return (NULL);
    }

    /* Copy the name and owner strings */
    strcpy(dog->name, name);
    strcpy(dog->owner, owner);

    /* Set the age */
    dog->age = age;

    return (dog);
}

