#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;
	next_node = current->next;

	if (next_node == NULL)
		return (current);

	*head = next_node;

	current->next = NULL;
	next_node = reverse_listint(head);
	current->next = next_node;

	return (current);
}

