#include "holberton.h"
/**
 *_strstr - finds the first occurence of the substring needle in the string
 *haystack.
 *@haystack: A variable containing the final output
 *@needle: A variable that is affecting haystack.
 *Return: The null if the word is not there.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, i2, b;

	i = 0;
	while (haystack[i] != '\0')
	{
		b = i;
		i2 = 0;
		while (needle[i2] != '\0' && needle[i2] == haystack[i]
		       && haystack[i] != '\0')
		{
			i++;
			i2++;
		}
		if (needle[i2] == '\0')
		{
			return (haystack + b);
		}
		i = b + 1;
	}
	return (0);
}
