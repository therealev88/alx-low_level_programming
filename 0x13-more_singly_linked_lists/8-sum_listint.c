/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked.
 *
 * @head: Pointer to the head node of the linked list.
 *
 * Return: The sum of all the data (n) of the linked list.
 *         If the list is empty, returns 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

