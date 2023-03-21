#include "main.h"
/**
 *islower - Adds a function that checks for lowercase
 *characters
 *
 *Return: If lowercase, returns 1 otherwise it returns 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
