# Tasks

## 0. Float like a butterfly, sting like a bee (Mandatory)
Write a function that creates an array of chars, and initializes it with a specific char.

Prototype:
```c
char *create_array(unsigned int size, char c);
```

Returns:
- NULL if `size = 0`
- A pointer to the array, or `NULL` if it fails

## 1. The woman who has no imagination has no wings (Mandatory)
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

Prototype:
```c
char *_strdup(char *str);
```

The `_strdup()` function returns a pointer to a new string, which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and it can be freed with `free`.

Returns:
- `NULL` if `str = NULL`
- On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available.

## 2. He who is not courageous enough to take risks will accomplish nothing in life (Mandatory)
Write a function that concatenates two strings.

Prototype:
```c
char *str_concat(char *s1, char *s2);
```

The returned pointer should point to a newly allocated space in memory, which contains the contents of `s1`, followed by the contents of `s2`, and is null-terminated.

Returns:
- `NULL` on failure

## 3. If you even dream of beating me you'd better wake up and apologize (Mandatory)
Write a function that returns a pointer to a 2-dimensional array of integers.

Prototype:
```c
int **alloc_grid(int width, int height);
```

Each element of the grid should be initialized to 0.

Returns:
- `NULL` on failure
- If `width` or `height` is 0 or negative, return `NULL`

## 4. It's not bragging if you can back it up (Mandatory)
Write a function that frees a 2-dimensional grid previously created by your `alloc_grid` function.

Prototype:
```c
void free_grid(int **grid, int height);
```

## 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe (Advanced)
Write a function that concatenates all the arguments of your program.

Prototype:
```c
char *argstostr(int ac, char **av);
```

Returns:
- `NULL` if `ac == 0` or `av == NULL`
- A pointer to a new string, or `NULL` if it fails
- Each argument should be followed by a `\n` in the new string

## 6. I will show you how great I am (Advanced)
Write a function that splits a string into words.

Prototype:
```c
char **strtow(char *str);
```

Returns:
- `NULL` if `str == NULL` or `str == ""`
- If your function fails, it should return `NULL`
