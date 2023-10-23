#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: (size) - The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
		size++;
	}

	*head = NULL;

	return (size);
}

