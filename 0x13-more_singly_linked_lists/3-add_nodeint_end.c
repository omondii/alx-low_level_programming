#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint_end - adds a node at the end of a listint_t
 *@head: first node in the list
 *@n: data to be stored i the node
 *Return: Address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode, *temp;

	NewNode = malloc(sizeof(listint_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return (*head);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = NewNode;
	return (*head);
}
