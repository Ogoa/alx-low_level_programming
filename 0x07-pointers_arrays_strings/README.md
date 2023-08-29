This directory contains tasks from the "0x07. C - Even more pointers, arrays and strings" project.
The files are mostly C source code files, alongside one header file "main.h" that contains all the function prototypes.
Some of the restrictions in this project were:
[x] There was no use of the sstandard library
[x] No use of functions like printf() and puts()


main.h
This is a header file containing all function prototypes of the functions used across the various programs in this project.

0-memset.c
Task 0
This program contains a function that fills memory with a constant byte. It works in a similar way as the memset() function provided in the standard library.
The function fills the first 'n' bytes of the memory area pointed to by 's' with the constant byte 'b'.

1-memcpy.c
Task 1
This program contains a function that copies memory area. It works in a similar way as the memcpy() function provided in the standard library.
It copies 'n' bytes from memory area 'src' to memory area 'dest' then returns a pointer to 'dest'.

2-strchr.c
Task 2
This program contains a function that locates a character in a string; it behaves in a similar way to the strchr() function provided in the standard library.
It returns a pointer to the first occurrence of the character found in the given string, or a NULL if it is not found.

3-strspn.c
Task 3
This program contains a function that gets the length of a prefix substring; it behaves in a similar way to the strspn() function provided in the standard library.
It returns the number of bytes in the initial segment of a string that is composed only of bytes from a character set.

4-strpbrk.c
Task 4
This program contains a function that locates the first occurrence of any character in a given set, in a given string. It works in a similar way to the strpbrk() function provided in the standard library.
It returns a pointer to the byte in the string, that matches one of the bytes in the specified set, or NULL if no match is found.

5-strstr.c
Task 5
This program contains a function that locates a substring. It works in a similar way to the strstr() function provided in the standard library.
It finds the first occurrence of the specified substring in a given string and returns the pointer to the beginning of the located substring, or NULL if otherwise.

7-printf_chessboard.c
Task 6
Thisp rogram contains a function that prints a chessboard.

8-print_diagsums.c
Task 7
This program contains a function that prints the sum of the two diagonals of a square matrix of integers.
Use of the standard library is allowed.
