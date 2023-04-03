#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: destination to copy to
 *@src: source copying from
 *@n: Number of bytes to copy
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cdest = (char *)dest;
	char *csrc = (char *)src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
