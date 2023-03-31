#include "main.h"
/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) < 'n')
			*(s + i) += 13;

		else if (*(s + i) >= 'n' && *(s + i) <= 'z')
			*(s + i) -= 13;
	}
	return (0);
}
