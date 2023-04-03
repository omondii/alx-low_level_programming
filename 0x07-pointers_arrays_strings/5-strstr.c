#include <string.h>
#include "main.h"
#include <stddef.h>
/**
 *_strstr - a function that locates a substring
 *@needle: substring
 *@haystack: string
 *Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	size_t needle_len = strlen(needle);

	if (needle_len == 0)
	{
		return ((char *) haystack);
	}
	while (*haystack)
	{
		if (strncmp(haystack, needle, needle_len) == 0)
		{
			return ((char *) haystack);
		}
		++haystack;
	}
	return (NULL);
}
