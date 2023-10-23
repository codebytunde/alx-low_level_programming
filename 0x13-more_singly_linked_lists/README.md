# 0x13. C - More singly linked lists

This project consists of 12 C programming tasks that involve working with singly linked lists. The goal of these tasks is to build a deeper understanding of how to work with linked lists in C and to meet specific learning objectives, such as using linked lists and following coding style guidelines.

## Learning Objectives
By completing this project, you will be able to:

1. Use linked lists effectively.
2. Learn to find the right sources of information without excessive reliance on external help.
3. Practice coding in C following a specific coding style (Betty style).

## Requirements
- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with specific options.
- Use of the Betty style for code formatting.
- No global variables are allowed.
- A maximum of 5 functions per file.
- Limited use of C standard library functions (only malloc, free, and exit are allowed).
- Use of the `_putchar` function for output.
- A `README.md` file at the root of the project folder.
- Inclusion of function prototypes in the header file `lists.h`.
- Encapsulation of header files with include guards.

## Tasks
### 0. Print list
Function: `size_t print_listint(const listint_t *h)`
- Prints all elements of a linked list and returns the number of nodes.

### 1. List length
Function: `size_t listint_len(const listint_t *h)`
- Returns the number of elements in a linked list.

### 2. Add node
Function: `listint_t *add_nodeint(listint_t **head, const int n)`
- Adds a new node at the beginning of a linked list.

### 3. Add node at the end
Function: `listint_t *add_nodeint_end(listint_t **head, const int n)`
- Adds a new node at the end of a linked list.

### 4. Free list
Function: `void free_listint(listint_t *head)`
- Frees a linked list.

### 5. Free list with a double pointer
Function: `void free_listint2(listint_t **head)`
- Frees a linked list and sets the head to NULL.

### 6. Pop
Function: `int pop_listint(listint_t **head)`
- Deletes the head node of a linked list and returns the data.

### 7. Get node at index
Function: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`
- Returns the nth node of a linked list, or NULL if it doesn't exist.

### 8. Sum list
Function: `int sum_listint(listint_t *head)`
- Returns the sum of all data in a linked list.

### 9. Insert node at index
Function: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`
- Inserts a new node at a given position in the linked list.

### 10. Delete node at index
Function: `int delete_nodeint_at_index(listint_t **head, unsigned int index)`
- Deletes the node at a specified index and returns 1 if successful, -1 if failed.

### 11. Reverse list
Function: `listint_t *reverse_listint(listint_t **head)`
- Reverses a linked list without using malloc, free, or arrays.

### 12. Print list (safe version)
Function: `size_t print_listint_safe(const listint_t *head)`
- Prints a linked list with error handling and a limited loop.

## Usage
To use the functions implemented in this project, include the `lists.h` header file and compile your C code with the provided flags and options.

Example compilation command:
```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o your_program your_program.c

