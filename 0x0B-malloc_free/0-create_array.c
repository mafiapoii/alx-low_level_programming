#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - A function that is taking in the values it is passed
 *@size: an integer that only takes positive integers
 *@c: A variable that takes in characters
 *Return: A pointer to the array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size != 0)
	{
		p = malloc((size) * sizeof(char));
	}
	else
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';
	return (p);
}
