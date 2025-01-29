#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;  /* Initialize the node count to zero */

	/* Traverse the list and print each node's data */
	while (h)
	{
		printf("%d\n", h->n);  /* Print the value of the current node */
		num++;  /* Increment the count for each node */
		h = h->next;  /* Move to the next node */
	}

	return (num);  /* Return the total number of nodes */
}

