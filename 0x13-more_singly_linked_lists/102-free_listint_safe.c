#include "lists.h"

/**
 * free_listint_safe - Frees a linked list
 * @h: Pointer to a pointer to the head node
 *
 * Return: The number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;

	if (h == NULL)
		exit(98);

	current = *h;

	while (current != NULL)
	{
		count++;
		tmp = current;
		current = current->next;

		free(tmp);

		if (tmp <= current)
			break;
	}

	*h = NULL;
	return (count);
}

