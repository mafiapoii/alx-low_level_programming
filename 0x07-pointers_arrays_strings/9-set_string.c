#include "holberton.h"
/**
 * set_string - The function that sets the value of a pointer to a char
 *@s: a pointer to a pointer
 *@to: a pointer that contains the string we want
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
