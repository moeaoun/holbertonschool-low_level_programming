#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    unsigned int i = 0;

    /* If the list is empty, return -1 */
    if (*head == NULL)
    {
        return (-1);
    }

    /* If the node to be deleted is the head node */
    if (index == 0)
    {
        *head = temp->next;
        if (temp->next != NULL)
        {
            temp->next->prev = NULL;
        }
        free(temp);
        return (1);
    }

    /* Traverse the list to find the node to delete */
    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }

    /* If the node at the specified index does not exist, return -1 */
    if (temp == NULL)
    {
        return (-1);
    }

    /* If the node to be deleted is in the middle or at the end */
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }

    free(temp);
    return (1);
}
                                                                                                                  
