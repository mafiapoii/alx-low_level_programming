#0x05-pointers_arrays_strings

|                  File                       |                     Description                     |
| :-----------------------------------------: |  :-----------------------------------------------:  |
|       0-strcat.c          |   A function that concatenates two strings by appending the src string to the dest string, overwriting the terminating null byte. |
|      1-strncat.c          |   A function that concatenates two strings that uses at most n bytes from src. |
|      2-strncpy.c          |   A function that copies a string.  |
|      3-strcmp.c           |   A function that compares two strings. |
|      4-rev_array.c        |   A function that reverses the content of an array of integers.  |
|      5-string_toupper.c   |   A function that changes all lowercase letters of a string to uppercase.  |
|      6-cap_string.c       |   A function that capitalizes all words of a string.  |
|      7-leet.c             |   A function that encodes a string into 1337  |
|      8-rot13.c            |   A function that encodes a string using rot13.  |

##Example:

####1-strncat.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-strncat.c -o 1-strncat
waltonlee$ ./1-strncat 
Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
waltonlee$ 
```
####5-rev_string.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-strcmp.c -o 3-strcmp
waltonlee$ ./3-strcmp
-15
15
0
waltonlee$ 
```
####7-leet.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 7-leet.c -o 7-1337
waltonlee$ ./7-1337
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
waltonlee$ 
