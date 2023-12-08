This directory contains files for tasks under the `0x17. C - Doubly linked lists` project.<br>
The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`.


<br>
`lists.h`<br>
Header file containing all the prototypes of functions used across the different source files in this directory.


<br>
`0-print_dlistint.c`<br>
A function that prints all the elements of a `dlistint_t` list.<br>
Prototype:
```
size_t print_dlistint(const dlistint_t *h);
```

<br>
`1-dlistint_len.c`<br>
A function that returns the number of elements in a linked `dlistint_t` list.<br>Prototype:
```
size_t dlistint_len(const dlistint_t *h);
```

<br>
`2-add_dnodeint.c`<br>
A function that adds a new node at the beginning of a `dlistint_t` list.<br>Prototype:
```
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
```

<br>
`3-add_dnodeint_end.c`<br>
A function that adds a new node at the end of a `dlistint_t` list and returns the address of the new element.<br>Prototype:
```
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
```
