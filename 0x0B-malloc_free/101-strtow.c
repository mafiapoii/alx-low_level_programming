#include <stdlib.h>
#include "holberton.h"
/**
 *countw - Gets the length of each individual word.
 *@strlen: A variable that takes in a string
 *Return: The length of the string
 */
int countw(char *strlen)
{
	int i;

	i = 0;
	while (*strlen != '\0')
	{
		if (*strlen == ' ')
			strlen++;
		else
		{
			while (*strlen != ' ' && *strlen != '\0')
			{
				strlen++;
			}
			i++;
		}
	}
	return (i);
}
/**
 *strtow - A function that splits a string into words
 *@str: a variable that takes in the string.
 *Return: The output of the string on a new line.
 */
char **strtow(char *str)
{
	int i, w_count, w_len, j;
	char **w_array, *sub_array;

	w_count = i = w_len = j = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	w_count = countw(str);
	if (w_count == 0)
		return (NULL);
	w_array = malloc((w_count + 1) * sizeof(char *));
	if (w_array == NULL)
		return (NULL);
	while (*str != '\0' && i < w_count)
	{
		if (*str == ' ')
			str++;
		else
		{
			sub_array = str;
			while (*str != ' ' && *str != '\0')
				str++, w_len++;
			w_array[i] = malloc((w_len + 1) * sizeof(char));
			if (w_array[i] == NULL)
			{
				for (i = i - 1; i >= 0; i--)
					free(w_array[i]);
				free(w_array);
				return (NULL);
			}
			while (*sub_array != ' ' && *sub_array != '\0')
			{
				w_array[i][j] = *sub_array;
				sub_array++; j++;
			}
			w_array[i][j] = '\0';
			i++; j = 0; w_len = 0; str++;
		}
	}
	w_array[w_count] = NULL;
	return (w_array);
}
