#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints numbers passed as arguments
 *@argc: counts all arguments to main including prog itself
 *@argv: pointer of arrays that holds the numbers passed as arguments
 *Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int result = 1;
	int i;

	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);

		result = result * x;
	}
	printf("%d\n", result);
	return (0);
}
