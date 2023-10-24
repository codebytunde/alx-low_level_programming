#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: a pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;
	const listint_t *checker;

	while (current != NULL)
	{
		node_count++;
		printf("[%p] %d\n", (void *)current, current->n);
		checker = head;
		for (size_t i = 0; i < node_count; i++)
		{
			if (current == checker)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(98);
			}
			checker = checker->next;
		}
		current = current->next;
	}

	return (node_count);
}

