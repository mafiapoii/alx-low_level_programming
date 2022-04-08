#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - A function that allocates memory for an array
 *@nmemb: memory allocation for the number of elements of the array
 *@size: the number of bytes within each element
 *Return: The memory allocation.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *p, array_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array_size = (nmemb * size);
	p = malloc(array_size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < array_size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
