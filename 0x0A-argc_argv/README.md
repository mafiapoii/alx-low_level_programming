#0x09-argc_argv

Passing in arguments from the command line. Main is now taking in parameters.

|                  File                       |                     Description                     |
| :-----------------------------------------: |  :-----------------------------------------------:  |
|        0-whatsmyname.c                      |  Function that prints the name of the file to standard out.  |
|        1-args.c                         |  Function that prints the number of arguments passed to the function.  |
|        2-args.c                         |  Function that prints all arguments it receives. |
|        3-mul.c                          |  Function that prints the product of two numbers. |
|        4-add.c                          |  Function that prints the addition of two numbers.  |

##Example:

####0-whatsmyname.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
waltonlee$ ./mynameis
./mynameis

```
####3-mul.c
```
waltonlee$ ./mul 2 3
6
waltonlee$ ./mul 2 -3
-6
waltonlee$ ./mul 2 0
0
waltonlee$ ./mul 245 3245342
795108790
waltonlee$ ./mul
Error
```
