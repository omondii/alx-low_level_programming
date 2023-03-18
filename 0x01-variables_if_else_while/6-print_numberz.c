#include<stdio.h>
/**
 *main - A program that lists base 10 numbers starting
 *       from 0
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	putchar('\n');
	return (0);
}
