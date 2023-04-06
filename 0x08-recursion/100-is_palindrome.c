#include "main.h"
/**
 *is_palindrome - checks if a string is palindrome
 *@s: string
 *Return: Always 0
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] == s[end])
	{
		return check_palindrome(s, start + 1, end - 1);
	}
	else
	{
		return (0);
	}
}

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0 || len == 1)
	{
	return (1);
	}
	
	return (check_palindrome(s, 0, len - 1));
}

int _strlen_recursion(char *s)
{
        if (*s == '\0')
                return (0);
        {
                return ((1) + _strlen_recursion(s + 1));
        }

}
