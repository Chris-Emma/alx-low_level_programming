#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - select correct operation function
 * @s: operator argument
 * Return: function pointer corresponding to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j;

	j = 0;
	while (j < 5)
	{
		if (ops[j].op[0] == s[0])
			return (ops[j].f);
		j++;
	}
	return (NULL);
}
