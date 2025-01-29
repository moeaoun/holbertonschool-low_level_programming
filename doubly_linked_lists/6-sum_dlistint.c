#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data (n), or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0; /* Initialize the sum to 0 */

    /* Traverse the list and accumulate the sum of each node's data */
    while (head != NULL)
    {
        sum += head->n; /* Add the current node's data to the sum */
        head = head->next; /* Move to the next node */
    }

    return (sum); /* Return the total sum */
}

