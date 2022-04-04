#0x08-static_libraries

|                  File                       |                     Description                     |
| :-----------------------------------------: |  :-----------------------------------------------:  |
|        libholberton.a                       |   A static library containing a collection of prototypes of functions. |
|        holberton.h                          |   A header file that contains all the prototypes of functions. |
|        create_static_lib.sh                 |   A bash script that creates a static library called liball.a from all the .c files in the current directory.  |
|        liball.a                             |   A static library made from all the .c files in the current directory. |
|        test                                 |   A directory full of .c files that contains all the prototypes used to create a static library. |

##Examples:

####libholberton.a and holberton.h
```
waltonlee$ ar -t libholberton.a 
0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
waltonlee$ cat main.c
#include "holberton.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
waltonlee$ gcc main.c -L. -lholberton -o quote
waltonlee$ ./quote
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
waltonlee$ 
```
####create_static_lib.sh
```
waltonlee$ ls *.c
0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c
waltonlee$ ./create_static_lib 
waltonlee$ ls *.a
liball.a
waltonlee$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
```
