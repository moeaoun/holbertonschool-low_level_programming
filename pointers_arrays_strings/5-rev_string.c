#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Description: This function reverses a string in place by swapping
 * characters from the two ends of the string towards the center.
 */
void rev_string(char *s)
{
    int left = 0;
    int right = 0;
    char temp;

    /* Find the length of the string */
    while (s[right] != '\0')
    {
        right++;
    }
    right--; /* Move to the last valid index of the string */

    /* Swap characters from both ends towards the center */
    while (left < right)
    {
        /* Swap the characters */
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        /* Move towards the center */
        left++;
        right--;
    }
}

