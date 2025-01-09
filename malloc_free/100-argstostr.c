#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the new concatenated string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
    int i, j, len = 0, k = 0;
    char *result;

    
    if (ac == 0 || av == NULL)
        return (NULL);

    
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            len++;
        len++; 
    }

    
    result = malloc(sizeof(char) * (len + 1)); 
    if (result == NULL)
        return (NULL);

    
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            result[k++] = av[i][j];
        }
        result[k++] = '\n'; 
    }

    result[k] = '\0'; 

    return (result);
}

