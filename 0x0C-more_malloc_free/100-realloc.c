#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - a function that reallocates a memory block
 *using malloc and free
 *@ptr: pointer to the memory address previously allocated with
 *a call to malloc.
 *@old_size: size, in bytes, of the allocated space for ptr
 *@new_size: new size, in bytes, of the new memory block
 *Return: The pointer pointing to the array in the memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *a, *p;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
		{
			free(a);
			return (NULL);
		}
		free(ptr);
		return (a);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	a = ptr;
	i = 0;
	while (i < old_size)
	{
		p[i] = a[i];
		i++;
	}
	free(ptr);
	return (p);
}
