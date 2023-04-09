#include "main.h"
/**
 *_strcpy - copies string pointed to by src, including the
 *  terminating
 *@src: current prointer head
 *@dest: buffer to point to
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
