This directory contains tasks from the "0x06. C - More pointers, arrays and strings" project.
The files are mostly C source code files, alongside one header file "main.h" that contains all the function prototypes.
Some of the restrictions in this project were:
[x] There was no use of the sstandard library
[x] No use of functions like printf() and puts()


main.h
This is a header file that contains all the function prototypes of functions that have been used across the different programs in this directory.

0-strcat.c
Task 0
This program contains a function that concatenates two strings.
The function appends the 'src' string to the 'dest' string,  overwriting the terminating null byte at the end of 'dest', and then adds a terminating null byte.

1-strncat.c
Task 1
This program contains a function that concatenates two strings, similar to strcat. However, only 'n' bytes from 'src' are used.

2-strncpy.c
Task 2
This program contains a function that copies a string.
The function works exactly like the "strncpy" function in the string library.

3-strcmp.c
Task 3
This program contains a function that compares two strings.
It works exactly like "strcmp" found in the C "string" library.

4-rev_array.c
Task 4
This program contains a function that reverses the content of an array of integers.

5-string_toupper.c
Task 5
This program contains a function that changes all lowercase letters of a string to uppercase.

6-cap_string.c
Task 6
This program contains a function that capitalizes all words of a string.

7-leet.c
Task 7
This program contains a function that encodes a string into 1337.
Letters 'a' and 'A' are replaced by 4.
Letters 'e' and 'E' are replaced by 3.
Letters 'o' and 'O' are replaced by 0.
Letters 't' and 'T' are replaced by 7.
Letters 'l' and 'L' are replaced by 1.
Only one 'if statement' can be used and only two loops are allowed. 'switch' statement cannot be used.
No ternary operation is allowed either.
