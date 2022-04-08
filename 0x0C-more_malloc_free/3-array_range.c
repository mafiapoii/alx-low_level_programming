#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - A function that creates an array of integers
 *@min: a variable that takes in a number as the argument
 *@max: a variable that takes in the max number as the argument
 *The output will output up to and including the max value.
 *Return: Pointer will point to the newly created array.
 */
int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	i = 0;
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
