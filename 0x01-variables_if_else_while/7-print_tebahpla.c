#include<stdio.h>
/**
 *main - A progra that lists alphabets in reverse order
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		printf("%c", i);
	}
	printf("\n");
	return (0);
}
