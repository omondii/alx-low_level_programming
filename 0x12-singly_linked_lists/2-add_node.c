#include "lists.h"
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>
/**
 *add_node - adds a node at the beggining of a singly linked list
 *@head: pointer to the head of the list
 *@str: string containing nodes
 *Return: New
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int count = 0;

	new = *head;
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	while (str[count] != '\0')
	{
		count++;
	}
	new->len = count;
	if (*head != NULL)
		new->next = *head;
	if (*head == NULL)
		new->next = NULL;

	*head = new;
	return (*head);
}
