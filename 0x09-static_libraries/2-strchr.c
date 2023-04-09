#include "main.h"
#include <stdlib.h>
/**
 *_strchr - locates a character in a string
 *@s: a string
 *@c: character searching for
 *Return: p
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;
	{
		do {
			if (*s == (char)c)
			{
				p = s;
				break;
			}
		} while (*s++);
	}
	return (p);
}
