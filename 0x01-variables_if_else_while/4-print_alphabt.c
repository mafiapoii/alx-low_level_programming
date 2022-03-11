#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	signed char x;
	int n;

	for (n = 97; n <= 122; n++)
	{
	x = n;
	if (n == 113 || n == 101)
	{
	continue;
	}
	printf("%c", x);
	if (n == 122)
	{
	printf("\n");
	}

	}
	return (0);
}
