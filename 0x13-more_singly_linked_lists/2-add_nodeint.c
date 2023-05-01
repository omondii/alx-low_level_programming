#include "lists.h"
#include<stdlib.h>
/**
 *add_nodeint - add a node at the beginning of a list
 *@head: headof the list to add a new node
 *@n: integer to add to the node as data
 *Return: address of the new elemnt(head)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = *head;
	NewNode = malloc(sizeof(listint_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;

	return (*head);
}
