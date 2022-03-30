#include "holberton.h"
/**
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
	{
		return(1 + _strlen_recursion(++s));
	}
	return(0);
}
int is_palindrome(char*s)
{
	int length;

	length = _strlen_recursion(s);
	if (length <= 1)
	{
		return(1);
	}
	return(helper(s, length - 1));
}
int helper(char *s, int length)
{
	if (length <= 1)
	{
		return(1);
	}
	else if (*s != s[length])
	{
		return(0);
	}
	else
	{
		return(helper(s + 1, length - 2));
	}
}
