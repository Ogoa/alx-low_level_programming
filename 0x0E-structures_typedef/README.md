This directory contains tasks under the `0x0E. C - Structures, typedef` project.<br>
It contains both header files and C source files.<br>
- [x] No use of global variables
- [x] Only standard library functions allowed were printf(), malloc(), free() and exit().


main.h


`dog.h`<br>
Task 0<br>
As well as defining function prototypes of all the functions that have been used across the various source files in this project, this header file also contains a definition of the arbitrary type, `struct dog` with its three elements: name, age and owner.

`1-init_dog.c`<br>
Task 1<br>
This program contains a function that initializes a variable of type `struct dog`.

`2-print_dog.c`<br>
Task 2<br>
This program contains a function that prints the details of an instance of `struct dog`.

`Task 3`<br>
Done in `dog.h` file.<br>
Here, a new type `dog_t` is defined as a new name for the type `struct dog`.

`4-new_dog`<br>
Task 4<br>
This program contains a function that creates a new dog. `NULL` is returned if the function fails.

`5-free_dog.c`<br>
Task 5<br>
This program contatins a function that frees dogs.
