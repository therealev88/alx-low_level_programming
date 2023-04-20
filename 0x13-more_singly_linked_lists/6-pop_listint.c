#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 *
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp_node = *head;
	*head = (*head)->next;
	data = temp_node->n;
	free(temp_node);

	return (data);
}

