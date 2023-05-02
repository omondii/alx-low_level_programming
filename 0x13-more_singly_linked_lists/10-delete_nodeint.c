#include "lists.h"
#include<stdlib.h>
/**
 *delete_nodeint_at_index - deletes the node at a given index
 *@head: start of a listint_t
 *@index: node to delete
 *Return:(1) successful (-1) unsuccessful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *NodeDelete;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}
	NodeDelete = temp->next;
	if (NodeDelete == NULL)
	{
		return (-1);
	}
	temp->next = NodeDelete->next;
	free(NodeDelete);

	return (1);
}
