#include "main.h"
/**
 *_isalpha - checks for alphabetic characters
 *
 *@c: the character to be checked
 *Return: if its a letter, return 1.
 * else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
