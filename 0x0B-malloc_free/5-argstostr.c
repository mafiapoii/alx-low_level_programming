#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - A function that concatenates all the arguments of the program
 *@ac: The number of arguments
 *@av: The characters being passed
 *Return: The arguments being passed through
 */
char *argstostr(int ac, char **av)
{
	int i, a, len;
	char *temp, *r;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		a = 0;
		while (av[i][a] != '\0')
		{
			a++;
			len++;
		}
		len++;
	}
	len++;
	r = malloc(len * sizeof(char));
	if (r == NULL)
		return (NULL);
	temp = r;
	for (i = 0; i < ac; i++)
	{
		a = 0;
		while (av[i][a] != '\0')
		{
			*r = av[i][a];
			a++;
			r++;
		}
		*r = '\n';
		r++;
	}
	return (temp);
}
