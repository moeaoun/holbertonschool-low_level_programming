#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* Traverse the list and free each node */
	while (head != NULL)
	{
		temp = head;        /* Save the current node */
		head = head->next;  /* Move to the next node */
		free(temp);         /* Free the current node */
	}
}

