#include <stdio.h>
/**
 *main - printing out all arguments it receives
 *@argc: counting the number of arguments passed into the function
 *@argv: taking in the arguments as a string
 *Return: Each argument is printed and ends with a new line.
 */
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
