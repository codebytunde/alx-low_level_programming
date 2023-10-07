# Project Title: More Malloc and Free

## Table of Contents
1. [Project Description](#project-description)
2. [Tasks](#tasks)
    - [Task 0: malloc_checked](#task-0-malloc_checked)
    - [Task 1: string_nconcat](#task-1-string_nconcat)
    - [Task 2: _calloc](#task-2-_calloc)
    - [Task 3: array_range](#task-3-array_range)
    - [Task 4: _realloc (Advanced)](#task-4-_realloc-advanced)
    - [Task 5: Multiply Positive Numbers (Advanced)](#task-5-multiply-positive-numbers-advanced)

## Project Description
This project involves working with memory allocation in C, specifically using `malloc`, `free`, `calloc`, and `realloc`. The tasks in this project focus on memory allocation, string manipulation, and error handling. Each task has specific requirements and learning objectives.

## Tasks

### Task 0: malloc_checked
Write a function that allocates memory using `malloc`.

- Prototype: `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory.
- If `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of 98.

### Task 1: string_nconcat
Write a function that concatenates two strings.

- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null-terminated.
- If the function fails, it should return `NULL`.
- If `n` is greater or equal to the length of `s2`, then use the entire string `s2`.
- If `NULL` is passed, treat it as an empty string.

### Task 2: _calloc
Write a function that allocates memory for an array, using `malloc`.

- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
- The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
- The memory is set to zero.
- If `nmemb` or `size` is 0, then `_calloc` returns `NULL`.
- If `malloc` fails, then `_calloc` returns `NULL`.

### Task 3: array_range
Write a function that creates an array of integers.

- Prototype: `int *array_range(int min, int max);`
- The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`.
- Return: the pointer to the newly created array.
- If `min` > `max`, return `NULL`.
- If `malloc` fails, return `NULL`.

### Task 4: _realloc (Advanced)
Write a function that reallocates a memory block using `malloc` and `free`.

- Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned unsigned int new_size);`
- `ptr` is a pointer to the memory previously allocated with a call to `malloc`: `malloc(old_size)`.
- `old_size` is the size, in bytes, of the allocated space for `ptr`.
- `new_size` is the new size, in bytes, of the new memory block.
- The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes.
- If `new_size` > `old_size`, the "added" memory should not be initialized.
- If `new_size` == `old_size`, do not do anything and return `ptr`.
- If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`.
- If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`.

### Task 5: Multiply Positive Numbers (Advanced)
Write a program that multiplies two positive numbers.

- Usage: `mul num1 num2`
- `num1` and `num2` will be passed in base 10.
- Print the result, followed by a new line.
- If the number of arguments is incorrect, print "Error," followed by a new line, and exit with a status of 98.
- `num1` and `num2` should only be composed of digits. If not, print "Error," followed by a new line, and exit with a status of 98.
- You are allowed to use more than 5 functions in your file.
- You can use `bc` (man bc) to check your results.
