#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: pointer to the newly allocated space in memory
 * containing the concatenated strings, or NULL if memory
 * allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
    char *concat_str;
    unsigned int len1, len2, i, j;

    
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

   
    for (len1 = 0; s1[len1] != '\0'; len1++)
        ;
    for (len2 = 0; s2[len2] != '\0'; len2++)
        ;

   
    concat_str = malloc((len1 + len2 + 1) * sizeof(char));
    if (concat_str == NULL)
        return (NULL);  

    
    for (i = 0; i < len1; i++)
    {
        concat_str[i] = s1[i];
    }

    
    for (j = 0; j < len2; j++)
    {
        concat_str[i + j] = s2[j];
    }

    
    concat_str[len1 + len2] = '\0';

    return (concat_str);  
}

