#include "main.h"
/**
 *_isdigit - checks if the character given is a digit
 *@c: number being fed into the function
 *
 *Return: If its a digit, return 1 else return 0
 */
int _isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
