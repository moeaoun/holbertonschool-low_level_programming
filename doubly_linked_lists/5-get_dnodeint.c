#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node, starting from 0.
 *
 * Return: The nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    /* Traverse the list to find the node at the specified index */
    while (head != NULL)
    {
        if (i == index)
        {
            return (head); /* Node found at the specified index */
        }
        head = head->next; /* Move to the next node */
        i++; /* Increment the index counter */
    }

    return (NULL); /* Return NULL if the node does not exist */
}

