#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer (data) stored in the node
 * @next: Pointer to the next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototypes */

/* 0. Print list */
size_t print_listint(const listint_t *h);

/* 1. List length */
size_t listint_len(const listint_t *h);

/* 2. Add node */
listint_t *add_nodeint(listint_t **head, const int n);

/* 3. Add node at the end */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* 4. Free list */
void free_listint(listint_t *head);

/* 5. Free list with a double pointer */
void free_listint2(listint_t **head);

/* 6. Pop */
int pop_listint(listint_t **head);

/* 7. Get node at index */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* 8. Sum list */
int sum_listint(listint_t *head);

/* 9. Insert node at index */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* 10. Delete node at index */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* 11. Reverse list */
listint_t *reverse_listint(listint_t **head);

/* 12. Print list (safe version) */
size_t print_listint_safe(const listint_t *head);

/* 13. Free list (safe version) */
size_t free_listint_safe(listint_t **head);

/* 14. Find the loop */
listint_t *find_listint_loop(listint_t *head);

#endif /* LISTS_H */

