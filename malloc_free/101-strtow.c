#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int i = 0, count = 0;

    while (str[i] != '\0')
    {
        while (str[i] == ' ')  // Skip spaces
            i++;
        
        if (str[i] != '\0')
        {
            count++;  // Start of a new word
            while (str[i] != ' ' && str[i] != '\0')  // Skip the word
                i++;
        }
    }

    return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: A pointer to an array of words (strings), or NULL if an error occurs.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, word_count, word_length;

    if (str == NULL || str[0] == '\0')  
        return (NULL);

    word_count = count_words(str);
    if (word_count == 0)  
        return (NULL);

   
    words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return (NULL);

    i = 0;  
    k = 0;  
    while (str[i] != '\0')
    {
      
        while (str[i] == ' ')
            i++;

        if (str[i] != '\0')
        {
          
            word_length = 0;
            while (str[i + word_length] != ' ' && str[i + word_length] != '\0')
                word_length++;

            
            words[k] = malloc(sizeof(char) * (word_length + 1));
            if (words[k] == NULL)
            {
            
                for (int m = 0; m < k; m++)
                    free(words[m]);
                free(words);
                return (NULL);
            }

            
            for (j = 0; j < word_length; j++)
                words[k][j] = str[i + j];
            words[k][j] = '\0';  

           
            i += word_length;
            k++;
        }
    }

    words[k] = NULL;  
    return (words);
}

