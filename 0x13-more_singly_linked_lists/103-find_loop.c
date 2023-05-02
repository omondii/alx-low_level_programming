#include "lists.h"
#include<stdlib.h>
/**
 *find_listint_loop - detects aloop in a list
 *@head: start of the listint_t
 *Return: address of the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *ptr2;

	ptr = head;
	ptr2 = head;

	while (ptr && ptr2 && ptr2->next)
	{
		ptr = ptr->next;
		ptr2 = ptr->next->next;
		if (ptr == ptr2)
		{
			ptr = head;
			while (ptr != ptr2)
			{
				ptr = ptr->next;
				ptr2 = ptr->next;
			}
			return (ptr);
		}
	}
	return (NULL);
}
