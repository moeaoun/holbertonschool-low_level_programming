#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: The integer value to be added in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = n;
    new_node->next = *head;
    new_node->prev = NULL;

    /* If the list is not empty, update the previous head node */
    if (*head != NULL)
    {
        (*head)->prev = new_node;
    }

    *head = new_node;

    return (new_node);
}

