#include "holberton.h"
/**
 *_strncat - a function that concatenates two strings.
 *@dest: string that will receive the appending.
 *@src: string that will append to dest.
 *@n: The variable that determines the cut off point if it's less
 *than the string length.
 *Return: The new string will be returned.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, a, b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	b = a;
	a = 0;
	while (a < b && a < n)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	return (dest);
}
