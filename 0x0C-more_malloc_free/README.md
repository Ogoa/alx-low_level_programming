This directory contains tasks under the "0x0C. C More malloc, free" project.'
[x] No use of global variables
[x] The only standard library functions permitted were malloc(), free() and exit()
[x] No more than 5 functions per file


main.h
This is a header file containing prototypes of all functions that have been used across the various programs in this project.

0-malloc_checked
Task 0
This program has a function that allocates memory using malloc() and returns a pointer to the allocated memory.
If malloc() fails, this function causes normal process termination with a status of '98'.

1-string_nconcat.c
Task 1
This program contains a function that concatenates two strings and returns a pointer to the resulting string which contains 's1' followed by the first 'n' bytes of 's2' and null terminated.
If 'n' is greater or equal to the length of 's2' then the entire string is used.
If the function fails, it should return 'NULL'.
If 'NULL' is passed, it is treated as an empty string.

2-calloc.c
Task 2
This program conatins a function that allocates memory for an array using malloc() and returns a pointer to the allocated memory, but works in a similar way to the calloc() function provided in the standard library.
It allocates memory for an array of 'nmemb' elements of 'size' bytes. If 'nmemb' is 0 or the function fails, then 'NULL' is returned.

3-array_range.c
Task 3
This program contains a function that creates an array of integers. The array should contain all the values from 'min' (included) to 'max' (included), ordered from 'min' to 'max'.
It should return the pointer to the newly created array.
If 'min' > 'max' or malloc() fails, 'NULL' is returned.
