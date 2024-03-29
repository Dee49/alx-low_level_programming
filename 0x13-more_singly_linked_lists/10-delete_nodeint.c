#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list
 * @head: A pointer to the address of the head of the listint_t list
 * @index: The index of the node that should be deleted, index starts at 0
 * Return: 1 (Success), -1 (Failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(copy);
	return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
	if (copy->next == NULL)
	return (-1);

	copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
