#0x07-recursion

|                  File                       |                     Description                     |
| :-----------------------------------------: |  :-----------------------------------------------:  |
|        0-puts_recursion.c                   |   A function that prints a string, followed by a new line. |
|        1-print_rev_recursion.c              |   A function that prints a string in reverse. |
|        2-strlen_recursion.c                 |   A function that returns the length of a string.  |
|        3-factorial.c                        |   A function that returns the factorial of a given number. |
|        4-pow_recursion.c                    |   A function that returns the value of x raised to the power of y. |
|        5-sqrt_recursion.c                   |   A function that returns the natural square root of a number.  |
|        6-is_prime_number.c                  |   A function that returns 1 if a number is a prime number or 0 otherwise.  |
|        7-is_palindrome.c                    |   A function that returns 1 if a string is a palindrome or 0 otherwise. |

##Examples:

####1-print_rev_recursion.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
waltonlee$ ./1-print_rev_recursion
reklaW notloC
waltonlee$ 
```
####3-factorial.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-factorial.c -o 3-factorial
waltonlee$ ./3-factorial
1
120
3628800
-1
waltonlee$ 
```
####4-pow_recursion.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-pow_recursion.c -o 4-pow
waltonlee$ ./4-pow 
1
1
65536
25
-1
-125
waltonlee$
