#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog - a function that prints the age, name and owner of a dog
 *@d: A pointer that points to the name, age and owner
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
