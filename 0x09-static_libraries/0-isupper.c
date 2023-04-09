#include "main.h"
/**
 *_isupper - check if the character entered is in uppercase
 *
 *@c: Is the number fed to the program
 *Return: Ic uppercase return 1 else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
