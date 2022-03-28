#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - a function that prints the sum of the two
 *diagonals of a square matrix
 *@a: a pointer that takes in the values of the matrix
 *@size: the size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i, total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + *(a + i);
		a = a + size;
		i++;
	}
	printf("%d, ", total);

	total = 0;
	i = 0;
	a = a - size;
	while (i < size)
	{
		total = total + *(a + i);
		a = a - size;
		i++;
	}
	printf("%d\n", total);
}
