#include "holberton.h"
/**
 *string_toupper - changes all lowercase letters to uppercase letters
 *@o: The variable that loops through the string and making them all into
 *capital letters.
 *Return: The value returned is 0.
 */

char *string_toupper(char *o)
{
	int i;

	i = 0;
	while (o[i] != '\0')
	{
		if (o[i] >= 'a' && o[i] <= 'z')
		{
			o[i] -= 32;
		}
		i++;
	}
	return (o);
}
