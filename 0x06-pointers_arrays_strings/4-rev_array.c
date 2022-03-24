#include "holberton.h"
/**
 *reverse_array - reversing the array of integers
 *@a:keeps track of the value
 *@n:A variable that is the number of elements of the array.
 *Return: The returned value is 0.
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int t[100000];

	i = 0;
	while (i < n)
	{
		t[i] = a[i];
		i++;
	}
	n--;
	i = 0;
	while (n >= 0)
	{
		a[n] = t[i];
		n--;
		i++;
	}
}
