#include "holberton.h"

/**
 *_strcat - A function that concatenates two strings.
 *@dest: a variable that holds the string that will be appended to src.
 *@src: a variable that holds a string that will be appended to.
 *Return: The wole string is returned.
 */

char *_strcat(char *dest, char *src)
{
	int i, a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
