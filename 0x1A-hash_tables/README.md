This directory contains files for tasks done under the `0x1A. C - Hash tables`.<br>

The implementation of this hash table follows the Chaining technique as a collision-handling technique.<br>
The hashtable is an array of pointers to linked lists.<br>
Each index of the array points to a bucket.

<br>`hash_tables.h`<br>
A header file containing function prototypes and declaration of structures.


<br>`0-hash_table_create.c`<br>
A function that creates a hash table and returns a pointer to the nexly created hash table, otherwise `NULL`.<br>Prototype:
```
hash_table_t *hash_table_create(unsigned long int size);
```

<br>`1-djb2.c`<br>
A hash function, `unsigned long int hash_djb2(const unsigned char *str);`, that implements the djb2 algorithm.


<br>`2-key_index.c`<br>
A function that gives you the index of a key using the `hash_djb2` function.<br>
Prototype:
```
unsigned long int key_index(const unsigned char *key, unsigned long int size);
```


<br>`3-hash_table_set.c`<br>
A function that adds an element to the hash table.<br>
Prototype:
```
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
```
