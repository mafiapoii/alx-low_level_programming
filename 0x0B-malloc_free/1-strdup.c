#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - A function that takes in the string as a parameter
 *@str: A pointer that points the memory address
 *that holds the string
 *Return: A pointer to a duplicated string or rturns NULL if
 *there was insufficient memory.
 */
char *_strdup(char *str)
{
	unsigned int a, i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	a++;
	p = malloc((a) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
