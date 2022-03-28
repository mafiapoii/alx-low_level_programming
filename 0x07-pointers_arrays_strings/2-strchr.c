#include "holberton.h"
/**
 *_strchr - a function that finds the first occurance of that letter
 *in that string.
 *@s:Takes the value of the string.
 *@c: The character that you want to find in the string.
 *Return: the characters that you wanted in the string or Null
 *if they don't exist.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}
