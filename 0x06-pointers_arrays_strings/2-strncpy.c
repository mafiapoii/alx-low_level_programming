#include "holberton.h"
/**
 *_strncpy - a function that copies a string
 *@dest: a variable that holds the string that needs to be added to.
 *@src: a variable that holds a string where we are coping it over to
 *the dest variable.
 *@n: a variable that represents how many bytes are copied over.
 *Return: The final string is returned.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
