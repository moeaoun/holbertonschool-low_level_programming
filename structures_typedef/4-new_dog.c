#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculates the length of a string manually
 * @s: string to calculate the length
 * 
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return len;
}

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
    int i;  /* Declare i outside the loop */

    /* Allocate memory for the dog_t struct */
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    /* Calculate lengths of name and owner manually */
    name_len = _strlen(name) + 1;  /* +1 for null terminator */
    owner_len = _strlen(owner) + 1;

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
    for (i = 0; i < name_len; i++)
        dog->name[i] = name[i];
    for (i = 0; i < owner_len; i++)
        dog->owner[i] = owner[i];

    /* Set the age */
    dog->age = age;

    return (dog);
}

