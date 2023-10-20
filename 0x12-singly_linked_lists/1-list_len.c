#include "lists.h"
#include <Stdlib.h>

/**
 * list_len - returns the number of elements in a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 * Babatunde Abubakar
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

