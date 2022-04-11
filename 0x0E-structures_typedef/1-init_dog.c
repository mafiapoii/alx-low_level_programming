#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - a function that initializes a variable of type struct dog
 *@d: a pointer variable that points to the address of a value
 *@name: a pointer variable that points to a string value
 *@age: a float variable that takes in a value
 *@owner: a pointer variable that points to a string value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
