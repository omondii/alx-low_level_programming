#include "main.h"
/**
 *_strncpy - copies n character from a null terminated source to a null
 *             terminated destination
 *@dest: destination
 *@src: source
 *@n: number of characters to be copied
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
