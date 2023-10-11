#include "function_pointers.h"

/**
*print_name - prints name
*@name:name tobe printed
*@f: print name function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
