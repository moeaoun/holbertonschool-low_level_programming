#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings up to n bytes from the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to take from s2.
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *str;
    unsigned int i = 0, j = 0, k = 0, l = 0;

   
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[i])
	    i++;
    while (s2[k])
	    k++;

    if (n >= k)
        l = i + k;
    else 
	    l = i + n;
  
    str = malloc(sizeof(char) * l + 1);  
    if (str == NULL)
        return (NULL);
    k = 0;
    while (j < l)
    {
	    if (j <= i)
		    str[j] = s1[j];
	    if (j >= i)
	    {
		    str[j] = s2[k];
		    k++;
	    }
	    j++;
    }
    str[j] = '\0';
    return (str);
}
