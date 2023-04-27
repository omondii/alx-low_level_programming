#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>
#include<string.h>
/**
 *add_node_end - adds a node at the end of a singly linked list
 *@head: pointer to the first node in  a list
 *@str: string that holds the nodes in  alist
 *Return: new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(size_t));
	list_t *current = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
