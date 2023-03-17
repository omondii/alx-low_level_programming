#include<stdio.h>
#include<ctype.h>
/**
 * main - A program that users the putchar and tolower functions
 *        to print the alphabet in lower case
 *Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
