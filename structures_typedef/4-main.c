#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Ghost", 4.75, "Jon Snow");

    if (my_dog != NULL)
    {
        printf("My name is %s, I am %.2f, and my owner is %s\n", my_dog->name, my_dog->age, my_dog->owner);
    }
    else
    {
        printf("Failed to create a new dog.\n");
    }

    return (0);
}

