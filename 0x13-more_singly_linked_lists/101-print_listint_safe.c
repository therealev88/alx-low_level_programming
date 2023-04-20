#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *prev;
	size_t count;

	if (head == NULL)
		exit(98);

	current = head;
	prev = NULL;
	count = 0;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		if (current < prev)
		{
			current = current->next;
			break;
		}
		prev = current;
		current = current->next;
	}

	return (count);
}

