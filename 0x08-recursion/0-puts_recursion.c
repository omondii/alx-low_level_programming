#include "main.h"
/**
 *_puts_recursion - prints a string dollowed by a new lin
 *@s: string to print
 *Returns 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
