/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to pointer to the first node of the list
 * @idx: Index of the node where the new node should be added
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i < (idx - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		tmp = tmp->next;
		i++;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}

