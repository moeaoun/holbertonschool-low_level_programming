#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: the name of the dog (pointer to char)
 * @age: the age of the dog (float)
 * @owner: the owner of the dog (pointer to char)
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

/* Define dog_t as an alias for struct dog */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

