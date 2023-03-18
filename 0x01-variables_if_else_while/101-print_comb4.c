#include<stdio.h>
/**
 *main - A program that prints all possible different combinations of three
 *        digits
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;


	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = 1; digit2 < 9; digit2++)
		{
			for (digit3 = 2; digit3 < 10; digit3++)

				if (digit1 != digit2 && digit1 != digit3
				    && digit2 != digit3)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 + digit2 + digit3 < 24)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
