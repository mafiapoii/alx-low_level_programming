#include <stdio.h>
/**
 *main - Writing a program that prints out all possible combinations of single
 *digit numbers separated by a space and comma.
 *
 *Return: The value zero is returned.
 */

int main(void)
{
	int i, a = '0';

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
