#include "main.h"
/**
 *_strcmp - copies two strings
 *@s1: string to copy from
 *@s2: string to copy to
 *
 *Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
		if(*s1 == '\0') return (0);
	return (*s1 - *s2);
}
