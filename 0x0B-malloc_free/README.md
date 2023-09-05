This directory contains tasks under the "0x0B. C - malloc, free" project.
All the files here are C source files.
[x] The only standard library functions allowed were the malloc() and free() functions.


main.h
This is a header file containing all the function prototypes of functions used across the various tasks in this project.

0-create_array.c
Task 0
This program contains a function that creates an array of chars, and initializes it with a specific char.

1-strdup.c
Task 1
This program contains a functions that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
It works in a similar way to the strdup() function provided by the standard library.

2-str_concat.c
Task 2
This program contains a function that concatenates two strings.
It returns a pointer to a newly allocated memory block that contains the contents of one string followed by the other string.

3-alloc_grid.c
Task 3
This program contains a function that returns a pointer to a 2 dimensional array of integers.
If the dimensions provided are 0 or negative, it returns NULL.
Each element of the grid is initialised to zero.

4-free_grid.c
Task 4
This program contains a function that frees a 2 dimensionsal grid previously created by the alloc_grid function.

100-argstostr.c
Task 5
This program contains a function that concatenates all the arguments of your program to form a single string. The program then returns a pointer to the new string.
Each arguments should be followed by a '\n' in the new string.
