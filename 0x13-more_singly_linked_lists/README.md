This directory contains tasks under the `0x13. C - More singly linked lists` project.<br>
It contains both C source files and one header file.<br>
- No more than 5 functions per file
- Only C standard library function used are `malloc`, `free` and `exit`. However, some may be used depending on the instructions given under each task.


`lists.h`<br>
This header file contains the function prototypes of all functions, as well as structures, used across the programs in this directory.


`_putchar.c`<br>
Source file containing the definition of the custom `_putchar` function that prints characters on the standard output.


`0-print_listint.c`<br>
Task 0<br>
This program contains a function that prints all the elements of a linked list.

`1-listint_len.c`<br>
Task 1<br>
This program contains a function that returns the number of elements in a linked list.

`2-add_nodeint.c`<br>
Task 2<br>
This program contains a function that adds a new node at the beginning of a `listint_t` linked list.

`3-add_nodeint_end.c`<br>
Task 3<br>
This program contains a function that appends a new node at the tail of a `listint_t` linked list.

`4-free_listint.c`<br>
Task 4<br>
This program contains a function that frees the memory allocated to a `listint_t` linked list.

`5-free_listint2.c`<br>
Task 5<br>
This program contains a function that frees a `listint_t` linked list and sets the `head` to `NULL`.

`6-pop_listint.c`<br>
Task 6<br>
This program contains a function that deletes a head node of a `listint_t` linked list and returns the head node's data value.
If the linked list is empty, 0 is returned.

`7-get_nodeint.c`<br>
Task 7<br>
This program contains a function that returns the nth node of a `listint_t` linked list. If the node does not exist, `NULL` is returned.

`8-sum_listint.c`<br>
Task 8<br>
This program contains a function that returns the sum of all the data values of the nodes in a `listint_t` linked list.
If the list is empty, 0 is returned.

`9-insert_nodeint.c`<br>
Task 9<br>
This program contains a function that inserts a new node at a given position in the linked list, then returns the address of the new node or `NULL` if it failed.
If it is not possible to add the new node at the specified index, the node is not inserted and `NULL` is returned.

`10-delete_nodeint.c`<br>
Task 10<br>
This program contains a function that deletes the node at a given index of an existing linked list.
The function then returns 1 if the operation succeded otherwise it returns 0.

`100-reverse_listint.c`<br>
Task 11<br>
This program contains a function that reverses a `listint_t` linked list and returns a pointer to the first node of the reversed list.
