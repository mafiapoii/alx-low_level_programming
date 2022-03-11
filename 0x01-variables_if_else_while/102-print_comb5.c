#include <stdio.h>
/**
 *main - Writing a program that prints numbers from 0 to 99.
 *Return: The value will return 0.
 */

int main(void)
{
	int i, j, k, l, f, s;

	for (f = 0; f < 100; f++)
	{
		for (s = 0; s < 100; s++)
		{
			if (f < s)
			{
				l = s % 10;
				k = s / 10;
				j = f % 10;
				i = f / 10;
				putchar(i + '0');
				putchar(j + '0');
				putchar(' ');
				putchar(k + '0');
				putchar(l + '0');
				if (f == 98 && s == 99)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
