#include "main.h"
#include <stddef.h>
/**
 *_strcat - concatenates two strings
 *@dest: the destination to concatenate to
 *@src: the source
 *
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	if ((dest == NULL) && (src == NULL))
		return (NULL);

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		dest[j + i] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
