#include <stdio.h>
/**
 *main - printing the alphabet from a through z
 *Return: The returned value is 0.
 */

int main(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
