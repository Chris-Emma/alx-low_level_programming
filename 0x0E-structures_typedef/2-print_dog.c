#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog
 * @d: pointer to dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");

	}
}
