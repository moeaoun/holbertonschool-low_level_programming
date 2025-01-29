#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;  /* Initialize the node count to zero */

	/* Traverse the list and count the nodes */
	while (h)
	{
		count++;  /* Increment the count for each node */
		h = h->next;  /* Move to the next node */
	}

	return (count);  /* Return the total number of nodes */
}

