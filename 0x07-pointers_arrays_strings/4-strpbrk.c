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
	int i = 0;
	int j = 0;

	int pos = 0;
	int fl = 0;

	while (*(s + i))
		i++;
	pos = i;
	i = 0;
	while (*(accept + i))
	{
		j = 0;
		while (*(s + j))
		{
			if (accept[i] == s[i])
			{
				if (j <= pos)
				{
					pos = j;
					fl = 1;
				}
			}
		}
		j++;
	}
	if (fl == 1)
		return (&s[pos]);

	return NULL;
}
