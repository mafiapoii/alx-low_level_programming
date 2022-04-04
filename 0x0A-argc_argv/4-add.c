#include <stdio.h>
#include <stdlib.h>
/**
 *main - A program that adds positive numbers.
 *@argc: the number of arguments going into the main function
 *@argv: the arguments being added together
 *Return: 0 if no number is passed,
 *1 if a character that is not a number is passed in
 */
int main(int argc, char *argv[])
{
	int i, output, total;
	char *check;

	total = 0;
	if (argc > 1)
	{
		i = 1;
		while (argv[i] != '\0')
		{
			output = strtol(argv[i], &check, 10);
			if (!*check)
			{
				total = total + output;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
	}
	printf("%d\n", total);
	return (0);
}
