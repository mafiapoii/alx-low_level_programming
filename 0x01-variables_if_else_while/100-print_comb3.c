#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separeted by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Priunt only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
  int i, j, k;

  i = 0;

  while (i < 100)
    {
      j = i % 10;
      k = i / 10;

      if (k < j)
	{
	  putchar(k + '0');
	  putchar(j + '0');

	  if  (i < 89)
	    {
	      putchar(44);
	      putchar(32);
	    }
	}

      i++;
    }
  putchar('\n');

  return(0);
}#include <stdio.h>
/**
 *main - Writing a program that prints numbers from 0 to 99.
 *Return: The value will return 0.
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 9 && j == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');

		}

	}
	putchar('\n');
	return (0);
}
