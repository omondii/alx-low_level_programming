#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: main string
 *@accept: substring
 *Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s, *p2;
	int n = 0;

	while (*p)
	{
		p2 = accept;
		while (*p2 && *p2 != *p)
			++p2;
		if (*p2 == '\0')
			return (n);
		++n;
		++p;
	}
	return (n);
}
