#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
	int r, s, sum = 0;

	for (r = 1; r < argc; r++)
	{
		for (s = 0; argv[r][s] != '\0'; s++)
		{
			if (argv[r][s] < '0' || argv[r][s] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[r]);
	}

	printf("%d\n", sum);

	return (0);
}
