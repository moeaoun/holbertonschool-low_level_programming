#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list_t list to be freed
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head)
	{
		list_t *temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

