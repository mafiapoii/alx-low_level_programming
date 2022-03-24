#include "main.h"

/**
 *swap_int - function that swaps values
 *
 *@a: first value
 *@b: second value
 *
 */
void swap_int(int *a, int *b)
{
int i = *a;
int j = *b;
*a = j;
*b = i;
}
