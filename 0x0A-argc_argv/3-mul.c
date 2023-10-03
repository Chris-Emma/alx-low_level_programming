#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication
*of two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int r, s, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	r = atoi(argv[1]);
	s = atoi(argv[2]);
	mul = r * s;

	printf("%d\n", mul);
	return (0);
}
