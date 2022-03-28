#include "holberton.h"
/**
 *_memset - a function that fills memory with a constant byte.
 *@s: a pointer that points to the memory area
 *@b: a constant byte
 *@n: a fixed number of bytes
 *Return: returns new output
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		s[m] = b;
		m++;
	}
	return (s);
}
