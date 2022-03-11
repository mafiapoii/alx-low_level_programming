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
	printf("%c", x);
	}
	for (n = 65; n <= 90; n++)
	{
	x = n;
	printf("%c", x);
	if (n == 90)
	{
	printf("\n");
	}
	}
	return (0);
}
