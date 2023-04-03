#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - searches for a string of any set of bytes
 *@s: string
 *@accept: substring
 *return: s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p1 = s;

	while (*p1 != '\0')
	{
		char *p2 = accept;
		while (*p2 != '\0')
		{
			if (*p1 == *p2)
			{
				return (char *)p1;
			}
			p2++;
		}
		p1++;
	}
	return (NULL);
}
