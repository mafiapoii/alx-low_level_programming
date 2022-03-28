#include "holberton.h"
/**
 *_strpbrk - Searches a string for any of a set of bytes
 *@s:a variable that contains the string
 *@accept: the string that is checked against for same characters
 *Return: The letters that were found when compared to accept variable
 */

char *_strpbrk(char *s, char *accept)
{
	int i, i2;
	char *f;

	i = 0;
	while (s[i] != '\0')
	{
		i2 = 0;
		while (accept[i2] != '\0')
		{
			if (s[i] == accept[i2])
			{
				f = &s[i];
				return (f);
			}
			i2++;
		}
		i++;
	}
	return (0);
}
