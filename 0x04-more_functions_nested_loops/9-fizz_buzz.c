#include <stdio.h>

/**
 * main - main fucntion
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", "Fizzbuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Bizz");
		else
			printf("%d", i);
		if (1 != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
