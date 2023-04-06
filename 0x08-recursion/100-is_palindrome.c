#include "main.h"
/**
 *is_palindrome - checks if a string is palindrome
 *@s: string
 *Return: Always 0
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return 1;
	}
	if (s[start] == s[end])
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
	return (0);
}
