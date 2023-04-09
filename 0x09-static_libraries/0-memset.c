#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: pointer to the memory block to be set
 *@b: The value to set each byte to
 *@n: Number of bytes to set
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n--)
	{
		*i++ = b;
	}
	return (s);
}
