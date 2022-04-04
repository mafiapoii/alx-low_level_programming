#0x0A-malloc_free

|                  File                                    |                     Description                     |
| :-----------------------------------------: |  :-----------------------------------------------:  |
|        0-create_array.c                        |  Function that creates an array of chars, and intializes it  with a specifc char.  |
|        1-strdup.c                         | Function that returns a pointer to a newly allocated space in memory , which contains a copy of the string given as a parameter.  |
|        2-str_concat.c                  |  Function that concatenates two strings. |
|        3-alloc_grid.c                  |  Function that returns a pointer to a newly created two dimensional integer grid. |
|        4-free_grid.c                       |  Function that frees a two dimensional grid.  |
|        5-argstostr.c                       |  Function that concatenates all arguments being passed from standard out.  |
|        100-strtow.c                      |  Function that splits a string into words.  |


##Example:

####1-strdup.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-strdup.c -o s
waltonlee$ ./s
Holberton
waltonlee$ 
```
####3-alloc_grid.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-alloc_grid.c -o g
waltonlee$ ./g
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
waltonlee$ 
```
####100-strtow.c
```
waltonlee$ cat 6-main.c
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      Holberton School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
waltonlee$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-strtow.c -o strtow
waltonlee$ ./strtow | cat -e
Holberton$
School$
#cisfun$
waltonlee$
