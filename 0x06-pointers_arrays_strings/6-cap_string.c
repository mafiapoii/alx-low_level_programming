#include "holberton.h"
/**
 *cap_string - A function that capitalizes all first letters of a string.
 *@m: A variable that holds the string.
 *Return: The variable o is returned.
 *
 */
char *cap_string(char *m)
{
	int i;

	i = 0;
	while (m[i] != '\0')
	{
		if (m[i] >= 'a' && m[i] <= 'z')
		{
			if (i == 0)
			{
				m[i] -= 32;
			}
			if (m[i - 1] == 32 || m[i - 1] == '\t' ||
				 m[i - 1] == '\n' || m[i - 1] == ',' ||
				 m[i - 1] == ';' || m[i - 1] == '.' ||
				 m[i - 1] == '!' || m[i - 1] == '?' ||
				 m[i - 1] == '"' || m[i - 1] == '(' ||
				 m[i - 1] == ')' || m[i - 1] == '{' ||
				 m[i - 1] == '}')
			{
				m[i] -= 32;
			}
		}
			i++;
	}
		return (m);
}
