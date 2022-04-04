#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - A function that concatenates two strings
 *@s1: A pointer that points to one string.
 *@s2: A pointer that points to a different string.
 *Return: Pointer points to a newly allocated space in memory
 *that contains both strings from s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	int i, a;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (a = 0; s2[a] != '\0'; a++)
		;
	a++;
	p = malloc((i * sizeof(char)) + (a * sizeof(char)));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (a = 0; s2[a] != '\0'; a++)
	{
		p[i] = s2[a];
		i++;
	}
	p[i] = '\0';
	return (p);
}
