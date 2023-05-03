#include "lists.h"
#include<stdlib.h>
/**
 * insert_nodeint_at_index - adds a node at a given position
 *@head: start of node to add to
 *@idx: position to add new node
 *@n: data
 *Return: temp
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *NewNode, *temp;

	temp = *head;
	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}
	idx = 0;

	NewNode->n = n;
	if (idx == 0)
	{
		NewNode->next = temp;
		*head = NewNode;
		return (*head);
	}
	while (idx > 1)
	{
		temp = temp->next;
		idx--;
		if (!temp)
		{
			free(NewNode);
			return (NULL);
		}
	}
	NewNode->next = temp->next;
	temp->next = NewNode;
	return (NewNode);
}
