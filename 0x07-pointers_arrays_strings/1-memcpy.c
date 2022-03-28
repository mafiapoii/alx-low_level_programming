#include "holberton.h"
/**
 *_memcpy - copies memory area
 *@dest: Memory area that is being changed.
 *@src: The values of the new memory area.
 *@n: The number of bytes being copied over to dest.
 *Return: The changed output of dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
