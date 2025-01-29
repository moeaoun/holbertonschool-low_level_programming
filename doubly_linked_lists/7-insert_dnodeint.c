#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be added.
 * @n: The integer value to be added in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    /* If the list is empty and we want to insert at index 0 */
    if (idx == 0)
    {
        return (add_dnodeint(h, n));
    }

    /* Traverse the list to find the node before the desired index */
    while (temp != NULL && i < idx - 1)
    {
        temp = temp->next;
        i++;
    }

    /* If temp is NULL, idx is out of bounds */
    if (temp == NULL)
    {
        return (NULL);
    }

    /* Create and insert the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }
    new_node->n = n;
    new_node->next = temp->next;
    new_node->prev = temp;

    if (temp->next != NULL)
    {
        temp->next->prev = new_node;
    }
    temp->next = new_node;

    return (new_node);
}

