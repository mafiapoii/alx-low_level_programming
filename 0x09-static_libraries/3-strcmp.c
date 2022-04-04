#include <stdio.h>
/**
 *main - A function that prints out the number of arguments that are passed
 *to it.
 *@argc: Variable that takes in the arguments.
 *@argv: A variable that takes in the argument as a string.
 *Return: The value returned is 0.
 */
int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		printf("%d\n", (argc - 1));
	}
	(void)argv;
	return (0);
}
